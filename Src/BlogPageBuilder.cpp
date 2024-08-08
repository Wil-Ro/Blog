#include "BlogPageBuilder.h"


BlogPageBuilder::BlogPageBuilder(std::string templateFileUrl, std::vector<Page*> pages, std::string inFolderUrl, int flags, std::string articleIdentifier)
{
    options = flags;
    pageTemplate = readFile(templateFileUrl);
    this->articleIdentifier = articleIdentifier;
    navIdentifier = "<nav>";


    NavBarGenerator* navGen = new NavBarGenerator();
    navSection = navGen->generateNavSection(pages, inFolderUrl, options);
    delete navGen;
}



std::string BlogPageBuilder::createPage(std::string articleHTML)
{
    std::string buffer = pageTemplate;

    int navLocation = calculateIdentifierLocation(navIdentifier, buffer);
    buffer.insert(navLocation, navSection);

    int articleLocation = calculateIdentifierLocation(articleIdentifier, buffer);
    buffer.insert(articleLocation, articleHTML);

    return buffer;
}

int BlogPageBuilder::calculateIdentifierLocation(std::string id, std::string text)
{
    int location = text.find(id) + id.length();
    if (location == std::string::npos)
        printf("Warning: no article found in given template file");
    return location;
}

std::string BlogPageBuilder::readFile(std::string fileUrl)
{
    std::ifstream file(fileUrl);
    std::stringstream fileCache;
    fileCache << file.rdbuf();

    return fileCache.str();
}

bool BlogPageBuilder::isOptionEnabled(int flag)
{
    return (options & flag) == flag;
}

bool NavBarGenerator::isOptionEnabled(int flag)
{
    return (options & flag) == flag;
}



std::string NavBarGenerator::generateCategories(std::string rootFolderUrl)
{
    std::stringstream buffer;
    std::set<std::string> folders;

    auto directoryIterator = std::filesystem::directory_iterator(rootFolderUrl);
    for (auto folder : directoryIterator)
    {
        if (folder.is_directory())
        {
            folders.insert(folder.path());
        }
    }

    for (std::string folder : folders)
    {
        std::string categoryName = folder.substr(folder.find_last_of("/")+1, folder.length()-folder.find_last_of("/"));
        buffer << "\n<h2>" << categoryName << "</h2>\n";
        buffer << generateCategories(folder);
        buffer << "\n";
    }
    return buffer.str();
}

std::string NavBarGenerator::findDeepestCategory(std::string url)
{
    int categoryEnd = url.rfind("/");
    int categoryStart = url.rfind("/", categoryEnd-1);
    return url.substr(categoryStart+1, categoryEnd-categoryStart-1);
}

std::string NavBarGenerator::insertPagesIntoCategories(std::string categories, std::vector<Page*> pages)
{
    for (Page* page : pages)
    {
        if (page->getPageFlags().alwaysHidden)
            continue;
        if (page->getPageFlags().hidden &&
            isOptionEnabled(OptionFlags::HIDE_PRIVATE))
            continue;

        std::string item;
        item.append("<li><a href=" + page->getRelativeOutUrl() + ">"
        + page->getPageTitle()
        + "</a></li>\n");

        std::string categoryOpening = "\n";
        int categoryStart = categories.find(findDeepestCategory(page->getInUrl()));
        int insertLocation = 0;
        if (categoryStart != -1)
            insertLocation = categories.find(categoryOpening, categoryStart) + categoryOpening.length();
        else
            insertLocation = navHeader.length();


        categories.insert(insertLocation, item);
    }

    return categories;
}

std::string NavBarGenerator::generateNavSection(std::vector<Page*> pages, std::string sourceFolderUrl,  int options)
{
    this->options = options;
    std::string buffer;
    buffer.append(navHeader);
    buffer.append(generateCategories(sourceFolderUrl));
    buffer = insertPagesIntoCategories(buffer, pages);
    return buffer;
}

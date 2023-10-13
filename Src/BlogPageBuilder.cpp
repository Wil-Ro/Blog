#include "BlogPageBuilder.h"


BlogPageBuilder::BlogPageBuilder(std::string templateFileUrl, std::string inFolder,
                                 std::string outFolder, int flags, std::string articleIdentifier)
{
    options = flags;
    this->outFolder = outFolder;
    this->inFolder = inFolder;
    pageTemplate = readFile(templateFileUrl);
    this->articleIdentifier = articleIdentifier;
    navIdentifier = "<nav>";

    parser = new BlogParser();

    collectPages();

    NavBarGenerator* navGen = new NavBarGenerator();
    navSection = navGen->generateNavSection(pages, options);
    delete navGen;
}

BlogPageBuilder::~BlogPageBuilder()
{
    for(Page* page : pages)
        delete page;
}

void BlogPageBuilder::createPage(Page* page)
{
    std::string buffer = pageTemplate;

    int navLocation = calculateIdentifierLocation(navIdentifier, buffer);
    buffer.insert(navLocation, navSection);

    int articleLocation = calculateIdentifierLocation(articleIdentifier, buffer);
    std::string articleText = parser->parse(page->getSourceFileContents());
    buffer.insert(articleLocation, articleText);

    page->setOutFileContents(buffer);
}

void BlogPageBuilder::buildAllPages()
{
    for(Page* page : pages)
    {
        createPage(page);
        page->writePageToFile();
    }
}

int BlogPageBuilder::calculateIdentifierLocation(std::string id, std::string text)
{
    int location = text.find(id) + id.length();
    if (location == std::string::npos)
        printf("Warning: no article found in given template file");
    return location;
}

void BlogPageBuilder::collectPages()
{
    auto directoryIterator = std::filesystem::recursive_directory_iterator(inFolder);
    for(auto file : directoryIterator)
    {
        if (file.is_directory())
            continue;
        pages.push_back(new Page(file.path(), outFolder));
    }
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

std::string NavBarGenerator::generateNavSection(std::vector<Page*> pages, int options)
{
    this->options = options;
    std::string buffer;
    buffer.append(navHeader);
    buffer.append(generateCategories(SOURCE_FILE_FOLDER));
    buffer = insertPagesIntoCategories(buffer, pages);
    return buffer;
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

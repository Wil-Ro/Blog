#include "BlogPageBuilder.h"


BlogPageBuilder::BlogPageBuilder(std::string templateFileUrl, std::string inFolder,
                                 std::string outFolder, std::string articleIdentifier)
{
    pageTemplate = readFile(templateFileUrl);
    this->articleIdentifier = articleIdentifier;
    navIdentifier = "<nav>";

    parser = new BlogParser();

    collectPages();
    navSection = generateNavSection();
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
    auto directoryIterator = std::filesystem::directory_iterator(SOURCE_FILE_FOLDER);
    for(auto file : directoryIterator)
    {
        pages.push_back(new Page(file.path(), OUTPUT_FILE_FOLDER));
    }
}

std::string BlogPageBuilder::generateNavSection()
{
    std::stringstream buffer;
    buffer << "\n<h1>Navigation</h1>\n\n";
    for (Page* page : pages)
    {
        if (page->getPageFlags().hidden)
            continue;
        buffer
        << "<li><a href=" << page->getOutFileUrl() << ">"
        << page->getPageTitle()
        << "</a></li>\n";
    }
    return buffer.str();
}

std::string BlogPageBuilder::readFile(std::string fileUrl)
{
    std::ifstream file(fileUrl);
    std::stringstream fileCache;
    fileCache << file.rdbuf();

    return fileCache.str();
}

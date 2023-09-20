#include "BlogPageBuilder.h"


BlogPageBuilder::BlogPageBuilder(std::string templateFileUrl, std::string articleIdentifier)
{
    pageTemplate = readFile(templateFileUrl);
    articleIdentifier = articleIdentifier;


}

std::string BlogPageBuilder::createPage(std::string text)
{
    std::stringstream buffer;

    int articleIdentifierLocation = calculateArticleIdentifierLocation();
    buffer << pageTemplate.substr(0, articleIdentifierLocation) << "\n\n";

    BlogParser* parser = new BlogParser();
    std::string mdFileContents = readFile(mdFileUrl);
    buffer << parser->parse(mdFileContents);

    buffer << pageTemplate.substr(articleIdentifierLocation, pageTemplate.length());

    return buffer.str();
}

int BlogPageBuilder::calculateArticleIdentifierLocation(std::string text)
{
    int location = pageTemplate.find(articleIdentifier) + articleIdentifier.length();
    if (location == -1)
        printf("Warning: no article found in given template file");
    return location;
}

std::string BlogPageBuilder::generateNavSection()
{
    std::stringstream buffer;
    for (Page page : pages)
    {
        if
    }
    return "";
}

std::string BlogPageBuilder::readFile(std::string fileUrl)
{
    std::ifstream file(fileUrl);
    std::stringstream fileCache;
    fileCache << file.rdbuf();

    return fileCache.str();
}

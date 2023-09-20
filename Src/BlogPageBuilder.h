#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include "BlogParser.h"
#include "Page.h"

/*
 * Class that builds blog pages, takes a template page to plut the blog-post in
 * along with an optional artifleIdentifier. The template is searched for this
 * and the blog is placed after it.
 */

class BlogPageBuilder
{
private:
    std::string pageTemplate;
    std::string articleIdentifier;

    std::vector<Page> pages;

    std::string navSection;

    std::string readFile(std::string fileUrl);
    int calculateArticleIdentifierLocation(std::string text);

public:
    std::string createPage(std::string mdFileUrl);
    std::string generateNavSection();
    BlogPageBuilder(std::string templateFileUrl, std::string articleIdentifier = "<article>");

};

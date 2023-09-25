#pragma once
#include "../MacroDefinitions.h"

#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <filesystem>

#include "BlogParser.h"
#include "Page.h"

/*
 * Class that builds blog pages, takes a template page to put the blog-post in
 * along with an optional artifleIdentifier. The template is searched for this
 * and the blog is placed after it.
 */

class BlogPageBuilder
{
private:
    std::string pageTemplate;
    std::string articleIdentifier;
    std::string navIdentifier;

    std::vector<Page*> pages;
    BlogParser* parser;

    std::string navSection;

    std::string readFile(std::string fileUrl);
    int calculateIdentifierLocation(std::string id, std::string text);
    void collectPages();

    std::string generateNavSection();
    void createPage(Page* page);

public:

    BlogPageBuilder(std::string templateFileUrl, std::string inFolder, std::string outFolder,
                    std::string articleIdentifier = "<article>");
    ~BlogPageBuilder();

    void buildAllPages();

};

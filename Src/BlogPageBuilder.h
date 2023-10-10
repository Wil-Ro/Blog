#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <filesystem>

#include "BlogParser.h"
#include "Page.h"

/*
 * Class that builds blog pages, takes a template page to put the blog-post in
 * along with an optional articleIdentifier. The template is searched for this
 * and the blog is placed after it.
 */

class BlogPageBuilder
{
public:
    enum OptionFlags
    {
        NONE = 0X0,
        HIDE_PRIVATE = 0x1
    };
private:
    int options;

    std::string outFolder;
    std::string inFolder;

    std::string pageTemplate;
    std::string articleIdentifier;
    std::string navIdentifier;

    std::vector<Page*> pages;
    BlogParser* parser;

    std::string navSection;

    std::string readFile(std::string fileUrl);
    int calculateIdentifierLocation(std::string id, std::string text);
    void collectPages();

    // TODO separate these into a separate object
    std::string navHeader = "\n<h1>Navigation</h1>\n\n";

    std::string generateNavSection();
    std::string generateCategories(std::string rootFolderUrl);
    std::string insertPagesIntoCategories(std::string categories);
    std::string findDeepestCategory(std::string url);

    void createPage(Page* page);
    bool isOptionEnabled(int flag);

public:

    BlogPageBuilder(std::string templateFileUrl, std::string inFolder, std::string outFolder,
                    int flags, std::string articleIdentifier = "<article>");
    ~BlogPageBuilder();

    void buildAllPages();

};

#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <filesystem>
#include <set>

#include "BlogParser.h"
#include "Page.h"

/*
 * Class that builds blog pages, takes a template page to put the blog-post in
 * along with an optional articleIdentifier. The template is searched for this
 * and the blog is placed after it.
 */
enum OptionFlags
    {
        NONE = 0X0,
        HIDE_PRIVATE = 0x1
    };

class NavBarGenerator
{
private:
    std::string navHeader = "\n<h1>Navigation</h1>\n\n";
    int options;

    std::string generateCategories(std::string rootFolderUrl);
    std::string insertPagesIntoCategories(std::string categories, std::vector<Page*> pages);
    std::string findDeepestCategory(std::string url);

    bool isOptionEnabled(int flag);

public:
    std::string generateNavSection(std::vector<Page*> pages, std::string sourceFolderUrl, int options);
};

class BlogPageBuilder
{
private:
    int options;

    std::string pageTemplate;
    std::string articleIdentifier;
    std::string navIdentifier;

    std::string navSection;

    std::string readFile(std::string fileUrl);
    int calculateIdentifierLocation(std::string id, std::string text);
    void collectPages();

    bool isOptionEnabled(int flag);

public:

    BlogPageBuilder(std::string templateFileUrl, std::vector<Page*> pages, std::string inFolderUrl, int flags, std::string articleIdentifier = "<article>");
    ~BlogPageBuilder();

    std::string createPage(std::string articleHTML);


};

#include <vector>

#include "BlogPageBuilder.h"
#include "AtomBuilder.h"
#include "Page.h"
#include "BlogParser.h"

class Program
{
private:
    BlogPageBuilder* blogPageBuilder;
    BlogParser* blogParser;
    AtomBuilder* atomBuilder;

    std::string inFolderUrl;
    std::string outFolderUrl;
    std::string siteWebUrl;

    std::vector<Page*> pages;

    void collectPages();

public:
    Program(std::string inFolderUrl, std::string outFolderUrl, std::string pageTemplate, std::string atomTemplate, std::string siteWebUrl, int flags);
    ~Program();
    void buildAll();

};

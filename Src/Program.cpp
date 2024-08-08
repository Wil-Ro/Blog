#include "Program.h"

void Program::collectPages()
{
    auto directoryIterator = std::filesystem::recursive_directory_iterator(inFolderUrl);
    for(auto file : directoryIterator)
    {
        if (file.is_directory())
            continue;
        pages.push_back(new Page(file.path(), outFolderUrl));
    }
}

Program::Program(std::string inFolderUrl, std::string outFolderUrl, std::string pageTemplate, std::string atomTemplate, std::string siteWebUrl, int flags)
{
    this->inFolderUrl = inFolderUrl;
    this->outFolderUrl = outFolderUrl;
    this->siteWebUrl = siteWebUrl;

    collectPages();

    blogPageBuilder = new BlogPageBuilder(pageTemplate, pages, inFolderUrl, flags);
    blogParser = new BlogParser();
    atomBuilder = new AtomBuilder(atomTemplate);
}

Program::~Program()
{
for(Page* page : pages)
    delete page;

}

void Program::buildAll()
{
    for(Page* page : pages)
    {
        std::string articleHTML = blogParser->parse(page->getSourceFileContents());

        page->setOutFileContents(blogPageBuilder->createPage(articleHTML));
        page->writePageToFile();

        atomBuilder->addHTMLEntry(articleHTML,
                                  page->getPageTitle(),
                                  siteWebUrl + page->getRelativeOutUrl(),
                                  page->getLastTimeEdited());
    }

    atomBuilder->writeToFile(outFolderUrl);
}

#include "Page.h"

// reads flags from fileContents, consumes and flag data found
void Page::calculatePageFlags()
{
    int endOfFirstLine = fileContents.find_first_of("\n");
    std::string tagLine = fileContents.substr(0, endOfFirstLine);
    fileContents = fileContents.substr(endOfFirstLine, fileContents.length()-endOfFirstLine);

    FlagReader* flagReader = new FlagReader();
    flags = flagReader->readFlags(tagLine);

    delete flagReader;
}

std::string readFile(std::string fileUrl)
{
    std::ifstream file(fileUrl);
    std::stringstream fileCache;
    fileCache << file.rdbuf();

    return fileCache.str();
}

Page::Page(std::string fileUrl)
{
    this->fileUrl = fileUrl;
    fileContents = readFile(this->fileUrl);
    calculatePageFlags();
}

std::string Page::getPageContents()
{
    return fileContents;
}

FileFlags Page::getPageFlags()
{
    return flags;
}

std::string Page::getPageTitle()
{
    return title;
}




FileFlags FlagReader::readFlags(std::string flagString)
{
    FileFlags flags;

    for (char c : flagString)
    {
        switch (c)
        {
            case 'p':
                flags.hidden = true;
                break;
        }
    }

    return flags;
}

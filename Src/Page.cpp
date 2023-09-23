#include "Page.h"

// reads flags from sourceFileContents, consumes and flag data found
void Page::calculatePageFlags()
{
    int endOfFirstLine = sourceFileContents.find_first_of("\n");
    std::string tagLine = sourceFileContents.substr(0, endOfFirstLine);
    sourceFileContents = sourceFileContents.substr(endOfFirstLine, sourceFileContents.length()-endOfFirstLine);

    FlagReader* flagReader = new FlagReader();
    flags = flagReader->readFlags(tagLine);

    delete flagReader;
}

std::string Page::readFile(std::string sourceFileUrl)
{
    std::ifstream file(sourceFileUrl);
    std::stringstream fileCache;
    fileCache << file.rdbuf();

    return fileCache.str();
}

Page::Page(std::string sourceFileUrl, std::string outFolderUrl)
{
    this->sourceFileUrl = sourceFileUrl;

    sourceFileContents = readFile(this->sourceFileUrl);
    calculatePageFlags();
    calculatePageTitle();

    std::string formattedTitle = findAndReplace(title, " ", "_");
    this->outFileUrl = outFolderUrl + "/" + formattedTitle + ".html";
}

std::string Page::getSourceFileContents()
{
    return sourceFileContents;
}

std::string Page::getOutFileUrl()
{
    return outFileUrl;
}

FileFlags Page::getPageFlags()
{
    return flags;
}

std::string Page::getPageTitle()
{
    return title;
}

void Page::setOutFileContents(std::string contents)
{
    outFileContents = contents;
}

void Page::calculatePageTitle()
{
    int startOfHeader = 0;
    int endOfHeader = 0;
    startOfHeader = sourceFileContents.find_first_of("#")+2;
    endOfHeader = sourceFileContents.find("\n", startOfHeader);

    title = sourceFileContents.substr(startOfHeader, endOfHeader-startOfHeader);
}

std::string Page::findAndReplace(std::string text, std::string find, std::string replace)
{
    int pos = 0;
    while (true)
    {
        pos = text.find(find, pos+1);

        if (pos == std::string::npos)
            break;
        text.replace(pos, 1, replace);
    }

    return text;
}

void Page::writePageToFile()
{
    std::ofstream file(outFileUrl);
    file << outFileContents;
    file.close();

    if (file.fail())
        printf("failed to write file");
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

#pragma once

#include <fstream>
#include <sstream>
#include <string>


struct FileFlags
{
    bool hidden;
};

class FlagReader
{
private:

public:
    FileFlags readFlags(std::string flagString);
};

/*
 * Class to represent the files of a blog page, this represents
 * the original file and its new output file
 */
class Page
{
private:
    std::string sourceFileUrl;
    std::string sourceFileContents;

    std::string outFileUrl;
    std::string outFileContents;
    std::string title;
    FileFlags flags;
    // file date should be added here

    void calculatePageFlags();
    void calculatePageTitle();
    std::string readFile(std::string fileUrl);
    std::string findAndReplace(std::string text, std::string find, std::string replace);

public:
    Page(std::string sourceFileUrl, std::string outFolderUrl);

    std::string getSourceFileContents();
    std::string getOutFileUrl();
    std::string getPageTitle();
    FileFlags getPageFlags();

    void setOutFileContents(std::string contents);

    void writePageToFile();

};

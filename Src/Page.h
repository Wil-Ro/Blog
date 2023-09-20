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
    std::string fileUrl;
    std::string fileContents;
    std::string title;
    FileFlags flags;
    // file date should be added here

    void calculatePageFlags();
    std::string readFile(std::string fileUrl);

public:
    Page(std::string fileUrl);
    std::string getPageContents();
    std::string getPageTitle();
    FileFlags getPageFlags();

};

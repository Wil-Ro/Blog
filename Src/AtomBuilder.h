#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
#include <stdio.h>
#include <ctime>

class AtomBuilder
{
private:
    std::string feed;


    std::string readFile(std::string fileUrl);
    int calculateStartOfIdentifierLocation(std::string id, std::string text);

    std::string getFeedHeader(std::string title, std::string link, std::string timestamp);
    std::string getTimeString();

public:
    void addHTMLEntry(std::string article, std::string title, std::string link, std::string timestamp);
    void writeToFile(std::string outFolderUrl);

    AtomBuilder(std::string templateUrl);
};

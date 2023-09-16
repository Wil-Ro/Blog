#include "BlogParser.h"




void BlogParser::saveTextToFile(const MD_CHAR* text, MD_SIZE size, void* userDataVoid)
{
    std::string fileUrl = ((UserData*)userDataVoid)->outputFileName;

    std::ofstream file;
    file.open(fileUrl, std::ios_base::app);
    file.write(text, size);
    file.close();

    text = 0;
}


int BlogParser::parse(std::string inputFileName, std::string outputFileName)
{
    std::ifstream file(inputFileName);
    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();

    std::string text = buffer.str();
    int length = text.length();

    UserData* userData = new UserData();
    userData->outputFileName = outputFileName;

    void* userDataVoid = userData;

    return md_html(text.c_str(), length, saveTextToFile, userDataVoid, 0, 1);
}


#include "BlogParser.h"




void BlogParser::writeTextToString(const MD_CHAR* text, MD_SIZE size, void* userDataVoid)
{
    std::string* output = ((UserData*)userDataVoid)->output;

    output->append(text, size);

#ifdef DEBUG
    printf("Parsed code produced:\n")
    printf("%.*s", size, text);
#endif
}


std::string BlogParser::parse(std::string text)
{
    UserData* userData = new UserData();
    userData->output = new std::string();
    void* userDataVoid = userData;

    md_html(text.c_str(), text.length(), writeTextToString, userDataVoid, 0, 1);

    return *(userData->output);
}



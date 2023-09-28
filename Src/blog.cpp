#include "MacroDefinitions.h"

#include <string>
#include <fstream>
#include <cstring>

#include "BlogPageBuilder.h"


std::string findAndReplace(std::string text, std::string find, std::string replace)
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

std::string getArg(int argc, char* argv[], std::string argIdString)
{
    for (int i = 0; i < argc; i++)
    {
        int idValSplit = argIdString.length()-1;
        const char* argId = argIdString.c_str();
        if (strncmp(argId, argv[i], idValSplit) == 0)
            return std::string(argv[i]).substr(idValSplit+1, strlen(argv[i])-(idValSplit+1));
    }
    return "";
}

/*
 * -in=""  // give source folder
 * -out="" // give output folder
 */
int main(int argc, char* argv[])
{
    std::string source = getArg(argc, argv, "-in=");
    if (source == "")
        source = SOURCE_FILE_FOLDER;
    std::string output = getArg(argc, argv, "-out=");
        if (output == "")
            output = OUTPUT_FILE_FOLDER;

    BlogPageBuilder* builder = new BlogPageBuilder(RESOURCE_FOLDER "/Templates/BlogPageTemplate.html",
                                                   source, output);
    builder->buildAllPages();

}

// TODO: get images and resources moved across to output to
// TODO: nav sections :eww:


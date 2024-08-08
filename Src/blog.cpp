#include "MacroDefinitions.h"

#include <string>
#include <fstream>
#include <cstring>
#include <filesystem>

#include "Program.h"


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

std::string getArgValue(int argc, char* argv[], std::string argIdString)
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

bool doesArgExist(int argc, char* argv[], std::string argIdString)
{
    for (int i = 0; i < argc; i++)
    {
        if(strcmp(argv[i], argIdString.c_str()) == 0)
            return true;
    }
    return false;
}

void copyFolderAndContents(std::string inUrl, std::string outUrl)
{
    std::filesystem::copy_options opts = std::filesystem::copy_options::update_existing |
    std::filesystem::copy_options::recursive;
    std::filesystem::copy(inUrl, outUrl, opts);
}

/*
 * -in=""  // give source folder
 * -out="" // give output folder
 * -static="" // give static resources folder (images and things to copy across to output folder go in here)
 * -hide // hides private posts
 */
int main(int argc, char* argv[])
{
    std::string source = getArgValue(argc, argv, "-in=");
    if (source == "")
        source = SOURCE_FILE_FOLDER;
    std::string output = getArgValue(argc, argv, "-out=");
    if (output == "")
        output = OUTPUT_FILE_FOLDER;
    std::string stat = getArgValue(argc, argv, "-static=");
    if (stat == "")
        stat = STATIC_RESOURCES_FOLDER;
    std::string siteWebUrl = getArgValue(argc, argv, "-url=");
    if (siteWebUrl == "")
        siteWebUrl = SITE_WEB_URL;

    int flags = OptionFlags::NONE;
    if (doesArgExist(argc, argv, "-hide"))
        flags |= OptionFlags::HIDE_PRIVATE;

    Program* program = new Program(source, output, RESOURCE_FOLDER "/Templates/BlogPageTemplate.html", RESOURCE_FOLDER "/Templates/AtomFeedTemplate.xml", siteWebUrl, flags);
    program->buildAll();

    // pre-written pages and resources i.e. images
    copyFolderAndContents(stat, output);

}

// TODO: nav sections :eww:

#include "../MacroDefinitions.h"

#include <string>
#include <fstream>

#include "BlogPageBuilder.h"



int main(int argc, char* argv[])
{
    std::string source = argv[1];
    if (source == "");
        source = SOURCE_FILE_FOLDER;
    std::string output = argv[2];
        if (output == "")
            output = OUTPUT_FILE_FOLDER;

    BlogPageBuilder* builder = new BlogPageBuilder(RESOURCE_FOLDER "/Templates/BlogPageTemplate.html",
                                                   source, output);
    builder->buildAllPages();

}


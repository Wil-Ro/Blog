#include "../MacroDefinitions.h"

#include <string>
#include <fstream>

#include "BlogPageBuilder.h"



int main()
{
    BlogPageBuilder* builder = new BlogPageBuilder(RESOURCE_FOLDER "/Templates/BlogPageTemplate.html",
                                                   SOURCE_FILE_FOLDER, OUTPUT_FILE_FOLDER);
    builder->buildAllPages();

}


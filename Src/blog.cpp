#include "../MacroDefinitions.h"

#include <string>
#include <fstream>

#include "BlogPageBuilder.h"



int main()
{
    BlogPageBuilder* builder = new BlogPageBuilder(RESOURCE_FOLDER "/Templates/BlogPageTemplate.html");
    std::string result = builder->createPage(TEST_RESOURCE_FOLDER "/TestFullArticle.md");

    std::ofstream file(RESOURCE_FOLDER "/output.html");
    file << result;
    file.close();
}


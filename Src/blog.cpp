#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Libs/md4c-html.h"

#define MD4C_USE_UTF8

void SaveTextToFile(const MD_CHAR* text, MD_SIZE size, void* unneeded)
{
    static int timesCalled = 0;
//     printf("Times called: %i\n", timesCalled++);
//     printf("This time we were given:\n");
//     printf(text);
//     printf("\n\n\n\n");

    std::string fileUrl = "../../outputfile.html";

    std::ofstream file;
    file.open(fileUrl, std::ios_base::app);
    file << text;
    file.close();
}


int main()
{
    std::ifstream file;
    file.open("../../inputfile.md");

    std::stringstream buffer;
    buffer << file.rdbuf();

    file.close();

    std::string text = buffer.str();
    int length = text.length();

    int endCode = md_html(text.c_str(), length, SaveTextToFile, NULL, 0, 1);
    printf("program finished with code %i\n", endCode);
}


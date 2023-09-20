#pragma once

#include <stdio.h>
#include <string>
#include <fstream>
#include <sstream>

#include "Libs/md4c-html.h"

/*
 * Essentially just a wrapper for md4c's C code so thats its easier
 * for my squishy little brain to handle
 */
class BlogParser
{
private:
    static void writeTextToString(const MD_CHAR* text, MD_SIZE size, void* unneeded);
    struct UserData{
        std::string* output;
    };

public:
    std::string parse(std::string text);
};

#pragma once

#include <catch2/catch_test_macros.hpp>

#include <string>
#include <fstream>
#include <sstream>



class TestFileReaderUtil
{
public:
    static std::string readFile(std::string fileUrl)
    {
        std::ifstream file(fileUrl);
        std::stringstream fileCache;
        fileCache << file.rdbuf();

        if (file.fail())
        {
            UNSCOPED_INFO("WARNING: File read failed");
            UNSCOPED_INFO("fileUrl: " + fileUrl);
        }

        return fileCache.str();
    }
};

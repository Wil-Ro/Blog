#include "BlogParser.h"


int main()
{
    BlogParser* parser = new BlogParser();

    std::string in = "../../inputfile.md";
    std::string out = "../../outputfile.html";
    parser->parse(in, out);
}


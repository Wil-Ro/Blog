#include "BlogParser.h"


int main()
{
    BlogParser* parser = new BlogParser();

    parser->parse("../../inputfile.md", "../../outputfile.html");
}


#include <catch2/catch_test_macros.hpp>
#include "../Src/BlogParser.h"

TEST_CASE("Parser returns basic text")
{
    BlogParser* parser = new BlogParser();
    REQUIRE(parser->parse("hello") == "<p>hello</p>\n");
}

TEST_CASE("Parser returns valid HTML for headers")
{
    BlogParser* parser = new BlogParser();
    REQUIRE(parser->parse("# header\nno header") == "<h1>header</h1>\n<p>no header</p>\n");
}


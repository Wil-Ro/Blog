/*
#include <catch2/catch_test_macros.hpp>
#include "../Src/BlogParser.cpp"

TEST_CASE("Basic Test")
{
    BlogParser* parser = new BlogParser();
    REQUIRE(parser->ParseText("hello") == "hello");
}

TEST_CASE("Parser returns valid HTML with basic component")
{
    BlogParser* parser = new BlogParser();
    REQUIRE(parser->ParseText("#header \n no header") == "<h1>header</h1>no header");
}
*/

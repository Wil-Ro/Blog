#include "../MacroDefinitions.h"

#include <catch2/catch_test_macros.hpp>

#include "../Src/BlogPageBuilder.h"
#include "TestFileReaderUtil.h"


// TEST_CASE("BlogPageBuilder reads template file")
// {
//     BlogPageBuilder* builder = new BlogPageBuilder(TEST_RESOURCE_FOLDER "/TestBlogPageTemplate.html");
//
//     std::string expectedOutcome = TestFileReaderUtil::readFile(TEST_RESOURCE_FOLDER "/TestBlogPageBlankExpectedOutcome.html");
//     std::string outcome = builder->createPage(TEST_RESOURCE_FOLDER "/EmptyFile.html");
//
//     REQUIRE(expectedOutcome == outcome);
// }
//
// TEST_CASE("BlogPageBuilder combines text with template")
// {
//     BlogPageBuilder* builder = new BlogPageBuilder(TEST_RESOURCE_FOLDER "/TestBlogPageTemplate.html");
//
//     std::string expectedOutcome = TestFileReaderUtil::readFile(TEST_RESOURCE_FOLDER "/TestBlogPageExpectedOutcome.html");
//     std::string outcome = builder->createPage(TEST_RESOURCE_FOLDER "/TestArticle.md");
//
//     REQUIRE(expectedOutcome == outcome);
// }

// CONSIDER THIS A SIGN THAT YOU NEED TO DELEGATE SOME FUNCTION TO OTHER CLASSES

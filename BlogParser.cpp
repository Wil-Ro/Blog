#include <iostream>
#include "PageFactory.h"

int main()
{
    PageFactory* pageFactory = new PageFactory();

    pageFactory->buildPage("#Hello world");

    std::cout << pageFactory->getPage();
}

/**
* ####### The Plan #######
* We have a factory, this contains a dictionary with a reference to a load of static objects(?)
* This dictionary is built on startup, each object has a start and end tag and the dictionary holds both
* (its given these on build)
* The factory goes through a given text fileand for each character, checks if its in the dictionary,
* if it is we call that object and pass it all the text until its end char. It will then produce
* output html that is stored in the factory as that page.
* 
* Main issues with this:
* We cant have components of a page inside each other :(
* We'll deal with this later
* 
* Also, are we building this page on each request? if so how does the user request a file that doesnt exist?
* I guess these are questions for oat++ to answer
*/

/*
BIG ISSUE:
we need our identifiers to be char[]'s since we have things like ## which is more than one char.
*/
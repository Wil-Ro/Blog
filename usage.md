
# Overview
Program takes in .md files and a few template html files, will then convert md to html and put it into the templates. 
Pages can each take settings to change how they're processed. Worth noting: this program doesnt host files, just generate them, 
I use lighttpd to do the actual hosting, a bit more on this is dotted around below too.

# Disclaimers
There are way better softwares to use than this (all of which do the hosting for you, unlike mine) I mostly made it as a fun 
challenge and to try make the software as lightweight as possible, example alternatives are:
- jekyll, made in ruby, heavy but really powerful, github websites use it,
- ikiwiki, permacomputing project, identical to mine but more stable and generally better designed I imagine

If you do use this, let me know and I'll try clean some of it up a bit! We can work on it together :)

# Basic use

## Setup
You might need to read the rest then come back to this
- clone the repo
- build using cmake (see below)
- install lighttpd, my program builds the pages, lighttpd will actually host them, it just checks a folder of files and
hosts any files in there
- set up a script that runs the program every so often to make sure the pages are up to date (or manually run it after
pushing, thats what I do)

## Building the command
- In the repo make a directory called "build"
- cd into it
- run ``cmake ..``
- run ``cmake --build .``
- in the build folder, under src there should now be a file called "blog", this is the program

## Running the command
I run the program from a script that does this:
``./blog -out="/var/www/localhost/htdocs" -in="/root/BlogPosts/posts" -static="/root/BlogPosts/static" -url="https://rosia.me"``
- out sets the directory to put the html files in, in my case, its the folder lighttpd uses
- in sets where the md files are read from, this __this folder can have sub folders and that will be reflected in the nav bar__
- static takes a directory full of random files that dont need converting but should still be in the out folder,
e.g. images or pdf files or illegal music you want to host [not like this](https://www.rosia.me/leon-rosselson/)
or [like this](https://www.rosia.me/traps-and-lessons/), I think static respects nested folders, but cant remember lol
- url takes your pages url, this is used by the program to generate an rss feed which at certain points will want to state its url

## Setting the templates
Firstly, what are the templates? This program converts md into html, but that only gives us the html for the text, we need the 
html for how the rest of the page looks outside of the blog posts individual text. This is what the template is. 
The program processes the template by looking for the first <article></article> tag and putting the md files html inside it. 
It also looks for the first <nav></nav> tags and puts the websites navbar in there!

Insanity reins free in my code. Due to this, the html templates location is hardcoded in the codebase, so to make your own 
templates you'll need to put them in ``Resources/Templates`` in the codebases repo, I should fix this.

## File settings
Individual md files can have settings! The first line of any text file is for its settings, so __always leave the first line of a md file blank__.
Settigs come in the form of single characters, at the moment the only two are:
- `P` to hide a page, this means it will still be hosted but wont be shown on the websites navbar. An of this would be [my quotes page](https://www.rosia.me/Quotes.html) 
- `p` to make a page as hidable, this means its on the nav bar, but if you have an employer looking at your site soon, you can run the program with the `-hide` argument and it will hide all those pages till you regenerate them


# Blog
A rebuild of my website with a C++ backend.
Currently using [md4c](https://github.com/mity/md4c) for parsing and [lighttpd](https://www.lighttpd.net/) for web backend.

I've mostly been using this as a chance to explore my thoughts on low-level-ish, low power code. 
Because of this I've been trying to use the simplest fastest libraries I can find and create a 
very bare-bones implementation that just does the minimum it needs to. 

As a finished product this code uses md4c to parse markdown and combines it with a template and on the side generates a navbar of all the existing pages according to their filesystem and puts that in each template too.
Pages can take some small settings and properties on their first line in the form of single chars (e.g. P to set to private while a page is still being worked on).

I'm really proud of this, its not clean but I feel like its a project I set myself a spec for and stuck really well to.

Find the site at [www.rosia.me](https://rosia.me) and a blog post about its creation [here](https://www.rosia.me/ThisSite.html)


## TODO
- new idea, add a setting to specify title of the page (title being the text in the tab of a browser)
- add the ability to cite in the markdown (md4c can take alterations like this)
- add a "latest change" section to the front page

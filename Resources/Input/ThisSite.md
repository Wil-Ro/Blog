
# This Site

This site is a small project I worked on over the course of a few weeks while first returning back to university during my second year. Its hosted on a small [lighttpd](https://www.lighttpd.net/) server running on an old laptop from around 2003. I wrote a small C++ program that takes in MarkDown files and builds them into webpages. Everytime the server turns on it pulls from a repo, builds the code and runs it, this then builds the website and puts them in a folder for lighttpd to host.

## The Thoughts Behind This

During my first year at university I read a lot around the concept of [Permacomputing](http://permacomputing.net/). This is a set of ideas around reusing old computers and writing small systems that avoid [code rot](https://en.wikipedia.org/wiki/Software_rot) and use as little power as possible.
The driving idea behind this being that we've had computers that are powerful enough for most small jobs for quite a long time and realistically a lot of old e-waste is still perfectly good for these kind of small low-risk jobs and can be used in an eco-friendly way when worked with correctly. I'd been reading into Permacomputing for a decent while but never properly had the chance to experiment with my thoughts on it.

Along with that I'd also spent time doing a module in my first year on the history of the internet and found the www's origins really inspiring, the idea of a language/system that was easy for just about anyone to learn, that was incredibly simple but super flexible. When learning about this I'd kind of started to feel like we'd lost that part of the internet. Websites are always generated with insane complexity which feels almost unnecessary when we still have that simple flexible system its all built on top of. I wanted to try and use that simple system again, to experience it for myself but also as a nice homage to it.

## The Code
I wanted the system to be as lightweight and fast as it could be, hopefully leading to a very power-efficient result. I decided to use C++ as it was my main language and was also very fast. I was planning on writing the server code myself but found lighttpd, a relatively old and incredibly light weight server program, as I was researching good libraries and it seemed much more efficient than any of the libraries I could find were benchmarked for so I decided to use that.

I initially planned to write a markdown parser and spent a day or two working on one, writing a [SAX-Style](https://en.wikipedia.org/wiki/Simple_API_for_XML) parser. I was unsure whether this was a workable idea for markdown but through thinking about it and planning how it would work I felt quite confident it would be much faster than a DOM parser. I soon found however that it would take most of my time up and I only wanted this to be a small project. I looked online and found [md4c][https://github.com/mity/md4c], a simple and insanely fast parser written in very low level c. It's benchmarks showed it could parse incredibly large documents in less than a millisecond which convinced me pretty quickly. It seemed much faster than any other option but also much simpler. After starting to implement this I discovered it actually parsed markdown text in the same SAX-Style system as I had planned to which made me very happy.

After discovering this I implemented it along with code to read the filesystem and combine the resulting html with a template. This took a few revisions as I wanted to make it as flexible and reusable as possible, making little to no assumptions about the template being given. By default the code searched for an empty `<article>` body and placed the generated html within it and a similar thing for the `<nav>` menu. This could then be overwritten by handing in other identifierss to look for.

The code would collect every markdown file, generate a nav menu summarising it then go through each page copying the template and adding that along with its matching markdown/html and writing it to a given file.

## The Hardware And Its OS
A few months before this project, I found an old laptop in a "free to a good home" box outside someones house. It was very old and originaly ran windows vista but someone had tried to update it to windows 10 and broken it. I took it home as a chance to take it apart and mess around with it but in the end found myself needing a server for this project and this felt perfect.

The main difficulty however was its power-consumption. Its powerconsumption felt like it would be much higher than newly bought lightweight hardware such as a raspberry pi. I spent a lot of time weighing up the differences and decided to try the laptop and measure its power consumption over a length of time. I'm doing this at the moment and will update this section soon.

The other big issue I hit was the operating system. I wanted something as lightweight as possible with little to no un-needed features. This included everything from a desktop to masses of additional packages in things like stock ubuntu. I weighed up a few options including:
- base debian
- raspberry pi OS lite (very stripped down pi os)
- arch

These each had their own issues, especially including my very minimal experience of linux outside of Pop!_OS which my main driver laptop runs. I was unsure what was included in base debian and what raspberry pi OS lite actually involved with little to know documentation or explanation of it online. I talked to a friend with more linux experience than I and he pointed me to [alpine linux](https://www.alpinelinux.org/). A massively stripped down linux distribution built specifically for lightweight servers and with its own package manager that offered a lighttpd install!

I decided to go for this very quickly as it seemed built specifically for the ideas I was wanting to test out, being incredibly minimalist and low-power.

## Alpine Linux
Alpine Linux was my first non-ubuntu linux experience. I really enjoyed learning about it and found its documentation really helpful and detailed with almost everything I needed. The OS itself was really simple and friendly too which was very nice. I did find I was very suprised by what was and wasnt included as I slowly learnt what came from debian and what didnt. Alpine didnt have sudo, any sort of file transfer systems or any of bash's basic features and learning that these didnt exist then seeing the base programs they were built out of was really interesting (for example sudo seems like its just a complex wrapper for su, a command that switches users).

Alpine essentially, from a users perspective, is made of busybox (a very basic shell that I also found runs within ubuntu after a kernel panic) and openrc which just controls how background services run. These two programs did everything I needed with openrc managing lighttpd and busybox letting me interact with the os and running a startup script for me to pull from github and rebuild/run the C++ code.




# AardvarkXR

## What it is
Aardvark is a development framework, currently in alpha, designed to allow users to open small apps (known as gadgets) over the top of virtual reality programs or games. You could think of it as a mobile phone for use within
any vr software, its main focus is providing small utilities such as calculators or note taking apps. Developers can create apps for Aardvark using web code which it then renders over the users view, these renders can be 2D
or 3D which is a rather big positive as steamVR doesnt support 3D rendering on overlays so Aardvark has to do this itself. Due to all the code being webbased and run on servers, all gadgets are innately multi-user (with a small amount
of work from the developer) and when in social vr apps, people can open gadgets that will be seen by all other users within that program.

I was first introduced to Aardvark through a hackathon the developers ran on its inital release to the public in an attempt to gain developers to create basic apps for it, and since then I have periodically revisited it
when ideas for gadgets come to mind. When taking part in the first hackathon I had little to no experience with javascript or html, let alone typescript (the main language used for Aardvark development), so I was required
to teach myself over the course of the 3 days the hackathon ran for.

<iframe width="560" height="315" src="https://www.youtube.com/embed/pux6RbySUMU" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


## What I did
During the first hackathon I proposed and worked on an audio visualiser tool that would run in the background of the users environment as they worked, reacting to their desktop audio. I also designed and created 3D models for other
developers programs, such as icons for a playing card app; one of the first apps to be published on the platform.

Around 4 months later I revisited Aardvark to create a photo viewing app which was originally a personal project but became a team effort with another member of the community who offered
to join development, the app allowed users to upload images which were stored using ipfs (a decentralized storage system) and had multi-user functionality allowing different people to show each other photos. The main idea of the program was to allow vr artists to
open reference images within their prospective drawing apps.


<iframe width="560" height="315" src="https://www.youtube.com/embed/E3gw_GXHH1s" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

As well as this I have also worked on the base code of the project itself. Originally Aardvark had the user open its Ui through a button on their hand which took up valuable visual space used by alot of other programs.
I was tasked with creating a more intuitive solution which ended up being a gesture based system. With little to no guidance I had to read and gain a full understanding of the projects mid-level inner workings and
rewrite large sections of it. After a week or so I produced a gesture system that allowed the user to bump the ends of their controllers together to open and close the menu. I also created a developer tool to allow
developers to tweak the gesture to ensure it worked for their specific controllers.


<iframe width="560" height="315" src="https://www.youtube.com/embed/9uG2HSavA1U" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
<iframe width="560" height="315" src="https://www.youtube.com/embed/FzQcE9UeOao" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

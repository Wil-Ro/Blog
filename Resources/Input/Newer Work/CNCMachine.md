
# CNSelfie

This was my first project created at my univeristy's robotics society. Created as an interactive robot for kids coming to university open days,
it would display a camera view and detect outlines then when a photo was taken with it it would generate gcode from these lines to direct
the society's CNC machine to draw out what it saw. The idea being that kids could have drawings of themselves made by a robot they could take home.

It was finished over the course of two weeks in collaboration with a friend at the society.

## Overview
The program worked using [OpenCV](https://opencv.org/). OpenCV would detect sharp edges and produce an black and white image, this would then by converted into a vector
which was then converted into gcode as paths for the CNC machine. I found a [library](https://github.com/PadLex/SvgToGcode) for converting between vectors and gcode but found it didnt have all the functionality I needed
so ended up adding alot of extra methods and rewriting a few of them.

This GCode was then sent by [Universal Gcode Sender](https://github.com/winder/Universal-G-Code-Sender) to our CNC machine.

## Gallery
fkuck

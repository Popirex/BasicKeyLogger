# Simple C Key Logger #
*( made for fun not for actual use )*


### - Welcome everyone!
After seeing a [Daniel Hirsch](https://github.com/danieldeer) video about a key logger written in C I got inspired to try and create my own version.

Its really simple and probably there are much better ways to create a key logger in C , but this is my own way so I hope you can enjoy it!

###  - Compilation
##### Note that all the paths you give when executing NEED no to be absolute ( starting with / root ).
You can use the ready to go executable ( with sudo to read the keyboard input file )

`sudo ./logger <keyboard-file-path> <path-to-save-logs>`


Or you can compile the file yourself with this command:

`gcc -o logger logger.c`

### - Where is the keyboard input file?

This program works exclusively in Linux, since it uses the "Everything is a file" filosophy.
You can find the keyboard input file generally in the `/dev/input/by-path` folder.

### - Creator Note
This small project was created for fun and I give all credit of inspiration to Daniel Hirsch as mentioned above. Have a good day!
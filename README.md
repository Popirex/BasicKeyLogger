# Simple C Key Logger

*(made for fun, not for actual use)*

### Welcome everyone!

After seeing a [Daniel Hirsch](https://github.com/danieldeer) video about a keylogger written in C, I got inspired to try and create my own version.

It's really simple and there are probably much better ways to create a keylogger in C, but this is my approach, so I hope you enjoy it!

### Compilation

**Note:** All paths you provide when executing the program NEED to be absolute (starting with / root).

You can use the ready-to-go executable (with sudo to read the keyboard input file):
```bash
sudo ./logger <keyboard-file-path> <path-to-save-logs>
```

Or you can compile the file yourself with this command:
```bash
gcc -o logger logger.c
```

### Where is the keyboard input file?

This program works exclusively on Linux, since it uses the "Everything is a file" philosophy.

You can generally find the keyboard input file in the `/dev/input/by-path` folder.

### Creator Note

This small project was created for fun and I give all credit for the inspiration to Daniel Hirsch as mentioned above. Have a good day!
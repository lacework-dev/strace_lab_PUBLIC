# Strace Lab
This lab gives hands on exercises to experiment with the strace utility.
The corresponding presentation was given virtually at DEF CON 2021's Packet Hacking Village.

## Requirements
* Linux host (tested on Ubuntu 20.04)
* Required packages gcc, make and strace (```sudo apt-get install gcc make strace```)

## Building
* ```make```

## Challenges 
0. Experiment with challenges 1-3 from the video for hands on experience.
1. Without looking at the source, discover why ```challenge_4.bin``` is difficult to trace.
2. challenge_5.bin was given to you by a developer to test. What's a key detail they left out that this binary requires?
3. How can you inject via strace to make ```challenge_5.bin``` run?
4. Build a tool to take the hex dump from the ```write``` syscall and make the ELF from ```challenge_3.bin``` recoverable.

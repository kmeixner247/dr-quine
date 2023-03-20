# dr-quine
A quine is a computer program which takes no input and produces a copy of its own source code as its only output. 
https://en.wikipedia.org/wiki/Quine_(computing)

This is an introductory project of the 42 cybersecurity branch. We need to write three different quines in up to three different languages: 
C, ASM and an arbitrary third one (I chose C++).

## Colleen
A program that contains atleast:
- A main function
- Two different comments (one in the main, one outside the program)
- Another function that is called from the main

When executed, the program must display its own source code on the standard output.

## Grace
A program that strictly contains:
- Three defines
- One comment
- No function directly declared (not even a main)

When executed, the program must create a file named Grace_kid.[c/s/cpp] that contains identical source code to the original source file.

## Sully
A program that contains an integer that is declared and initialized to 5. When executed, it must create a new source file named Sully_X, 
where X is the value of the integer decremented by one.

The source code of the new file must be identical to the previous one, except for the value of the integer being decremented by one.
If the integer is lower than 1, the program must not do anything.

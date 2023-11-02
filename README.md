I have implemented the following functionalities as separate modules, each with its own file:

1. Display, implemented in Display.c
2. Echo, implemented in Echo.c
3. Print Working Directory (PWD), implemented in PWD.c
4. Change Directory (cd), implemented in CD.c

All these modules share a common header file named header.h, which includes the necessary headers.

To run the shell, simply execute the command "gcc Main.c" in terminal. 
This will compile the Main.c file and create a custom interactive shell program where we can input and execute the commands(pwd, echo and variations of cd).

I have addressed the problems related to spaces and tabs in the input. However, I have not implemented any exceptions for handling new lines. Therefore, if a new line command is provided without any other preceding characters, it may lead to an infinite loop.
// Source Code - which is the text we write as a programmer to Machine Code - that is the binary numbers

// That is converting higher level language to low level language

// source code -> compiler -> machine code

// compiler is a program that translates one language to other

// Using 'hello world'
// code hello.c - open or create a new file (.c extension for c language) -> file name by convention it is in lower case, never use space in file name and also extension in lowercase
// make hello - its like make the program or compile the file (also where you will see the errors) -> that is converting source code to machine code (not to write make hello.c)
// ./hello - this is to run the code -> ./ from current folder and ../ from parent folder

// these three commands helps in write, compile and run the code

// $ sign in terminal - to represent prompts that is like go to prompt which means go to terminal window or go to the $ sign
//sometimes it maybe different sign

#include <stdio.h>

int main(void)
{
    printf("Hello World\\n");
    return 0;
}

// \n - new line

// why is \n is inside the quotes?
// because inside quotes we give inputs through this printf will display the output. So it should be included inside the quotes so that it will give the new line 
// \n is the special pattern 

// What if we want to print \n in the output?
// solution is adding another backslash -> \\n


// arguments -> functions -> 

// functions - algorithm or codes
// arguments(parameters) - inputs 
// side effects 

// Escape Sequence:
// \n 
// \t
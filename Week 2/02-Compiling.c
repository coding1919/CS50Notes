// cryptography

// U I J T   X B T   D T 5 0 -cryptic

// source code -> compiler -> machine code
// printf("Hello"); -> compiler -> 01101010 11110000

// we will go through the abstraction of low level implementation (means how the compiler works) so that we can able to solve the bugs and the errors 

// #include <stdio.h>
// int main(void){
//     printf("Hello, World\n");
// }

// make hello - program that automatically runs a compiler for you (make) - 
// ./hello

// compiler used is clang for C program

// rm hello
// y

// clang hello.c
// ./a.out (assembler out also simple name) - it is not user friendly

// clang can be configured using command line arguments (additional words or shorthand notations that we typed on the command prompt and somehow modify the behavior of a program)
// clang -o hello hello.c - same as make
// ./hello

// if we use input using cs50.h and get_string while compiling there is an error

// #include <stdio.h>
// #include <cs50.h>
// int main(void){
//     string name = get_string("What is your name? ");
//     printf("Hello, %s\n",name);
// }

// if we want to use the third party library then we have to tell the compiler about it by header file and also a command
// clang -o hello hello.c -lcs50 (link cs50)
// ./hello

// make - it makes it easier and make is the same command as above 

// in between source code to machine code there are four process to undergo:
// 1. preprocessing -
// #include is the preprocessor directive. when we include that in our program like if we have cs50.h and we used get_string() function then the prototype of get_string() function is brought from cs50.h and pasted inour program so that we don't have to write or copy again code pof get_string() function - its like converting #include files to the prototype whatever the functions that we are using and it should be available in that file.
// 2. compiling -
// after preprocessing it happens in the computer memory without changing our code and changes our code from C to assembly language - it includes get_string as callq and printf as callq and many other like mov1, xor1
// traditionally humans were using assembly language and previous more years back they used to write in 0's and 1's
// 3. assembling - 
// takes assembly code and convert it into 0's and 1's as machine code
// and why it uses a.out is becuase of this side effect
// 4. linking -
// technically there is one file that which we have wrote + the files that we have included using #include like stdio.h and cs50.h had been kept in some hard disc or the servers which includes all functions like get_string , printf()- .c is just inferred as .h file in c by including it - it is the program that someone wrote and stored in the server which we downloaded to our hard disc
// like hello.c - cs50.c - stdio.c and all these seperate files are converted into machine codes that is 0's and 1's - this step or process links all these 3 files together and finally we get the output

// compiling - which all these steps or processes is done by make

// other types of compilers?
// GCC - GNU compiler collection
// Clang is recent and it is gaining popularity - its errors are slightly user friendly than others

// decompile - it is the reverse process of compile. This is very hard process and even a good programmer can't do it. 
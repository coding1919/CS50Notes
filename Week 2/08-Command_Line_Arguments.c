// we can write the code to take the arguments at the command prompt

#include <stdio.h>

int main(int argc, string argv[])
{

    return 0;
}

// argc (argument count) - how many words did the human type at the prompt
// argcv (argument vector) - another term for array from mathematics - list of values or list of command line argumenst
// whatever the human typed at the prompt and hand it to you as an array and length

// greet.c

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    printf("hello, %s\n", argv[1]);
}

// by that we can just give the name in the command prompt like this

// make greet
// ./greet safwan

// printf("hello, %s\n",argv[0]); - whatever the name of the program is always accessible in argv at location 0 - its a feature - in case of error or we need to tell the user how to use the program you know what the command is that they ran
// location . is the additional word that human typed

// for 2

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    printf("hello, %s\n", argv[0]);
}

// this will give null - hello, (null)

// correct -

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}

// for - ./greet David - hello, David
// for - ./greet - hello, world
// for - ./greet David Malen - hello, world

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){
    for(int i =0; i<=argc; i++){
        printf("%s\n",argv[i]);
    } 
}

// ./greet
// ./greet
// ./greet David
// ./greet
// David
// ./greet David Malen
// ./greet
// David
// Malen


// ASCII art:
// making pictures and beautiful things just using Ascii or nowadays using unicode characters but without using emoji

// in cs50 vscode
// in terminal 
// cowsay moo
// cowsay hello, world
// cowsay -f duck quack - changing cow to duck
// cowsay -f dragon RAWR - changing cow to dragon
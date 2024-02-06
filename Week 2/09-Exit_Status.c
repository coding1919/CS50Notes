// All the programs which we have done - it gets exited

// every program which we written has an exit status
// its a special return value from the program itself that by default is always 0

// 0 as number in the world which generally means everything's ok

// other than zero all other number in exit status is bad 

// while using apps or websites we get error and shows it shows the error code like 1132
// so exit status is 1132 which is bad
// somewhere there probably be a file or book that tells the programmer what this error code actually means.
// this is not useful for us
// 404 - file not found - it maybe some type error or maybe deleted etc so it is showing the error - http status code

// numbers are mostly used to represent errors

// exit status for command line software
// int in the main() is program can return values which can be useful even if you don't use command line arguments - in void

// status.c
#include <stdio.h>
#include <cs50.h>

int main(int argc, argv[1]){
    if(argc != 2){
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

// return 1 will give error if the input is wrong
// in case of big softwares and apps there maybe many return errors so the number goes very high like 1132
// return 0 if input is correct then code will get executed successfully

// make status
// ./status safwan
// hello, safwan
// this is executed succesfully which means return is 0

// if we want to see the 0
// echo $? - shows what did the recently run program secretly exit with
// echo $?
// 0

// check50 also checks the exit status 



// make status
// ./status David Malan
// it is an error so it returns 0
// echo $? 
// 1

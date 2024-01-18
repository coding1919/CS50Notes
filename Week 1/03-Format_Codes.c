// to take the inputs
// arguments -> functions -> return value(most of the function has return value) - its like executes the task and the answer is given and that can be used elsewhere without broadcasting to others

// answer = get_string("Whats your name? ");
// where answer is the variable that stores the return value from the get_string function

// printf("Hello, %s\n",answer);
// where %s is format code or specifier which takes the stored return value or the value that is in the variable will be reflected to the %s format code
// it has two inputs that is one at the left of comma and other at the right of comma

// why can't we use \n after the ,answer ?
// because the way prinf() works is it takes the inputs on the first argument so all inputs are used in first arguments also %s and \n which we want to be printed and the ,answer is a second argument which is passed to %s that is in first argument

// can you abstract away from the format string itself?
// yes we can, but it is not easy in C but its easy in python and JavaScript

// #include <stdio.h>
// #include <cs50.h>

// int main(void){
//     string answer = get_string("What is your name? ");
//     printf("Hello, %s\n",answer);
// }

// Types of Data (#include <cs50.h>)
// bool
// char - %c
// double 
// float - %f
// int - %i (normally %d)
// long - %li
// string - %s

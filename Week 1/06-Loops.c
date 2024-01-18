// The things which happens again and again 

#include <stdio.h>
int main(void){
int counter = 3;
// its creating a variable called counter of type int and setting it equal to 3 -> defining a variable

// while,for and do-while

// while (/* condition */)
// {
//     /* code */
// }


while(counter>0)
{
    printf("meow\n");
    counter = counter - 1;
}
}

// it first check the condition , if its true then the code is executed and if there is any iterations it will perform it in this case it is a decrement of a counter and so on. If the condition is not met and false then it will come out of the loop.

// What if we use counter inside the curly braces?
// it will give an error because C compiles from top to bottom and left to right so it will first directly executes while loop without any initialisation

// int i = 3;
// while(i>0){
//     printf("Meow\n");
//     i = i - 1; // i -= 1; // i--;
// }

// sometimes it better to use some character if there is not large code or variable to be used like i in case of while loop
// better not to use only alphabets or meaningless variable in the code

// also we can use in this way
// int i = 1;
// while(i<3){
//     printf("Meow\n");
//     i = i + 1; // i += 1; // i++;
// }

// for loop 
// for(int i=0; i<3; i++){
    // printf("Meow\n");
// }

// first is initialize a variable - it happens only once
// second is boolean expression - checks the condition if true it executes
// third is update - what to do at the end of the loop - increment(mostly)

// we can skip the curly braces for one statement

// we can skip the condition but it will do loop many times

// for forever - in scratch
// similar to it is:
// // while(true){
// }


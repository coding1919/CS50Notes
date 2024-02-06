// An array is sequence of values back to back to back in memory 
// no gaps, no fragmentation from left to right and top to bottom

// syntax:
// int scores[3]; - one variable, values as int, with three integers
// we are telling the memory that give me the space of three integers and computer stores it back to back

// assigning the values:
// scores[0] = 72; // go into that array in location 0 and put the value 72 in it 
// scores[1] = 73; // go into that array in location 1 and put the value 73 in it 
// scores[2] = 33; // go into that array in location 2 and put the value 33 in it 

// scores.c

#include <stdio.h>

int maih(void){
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;
    printf("Average: %f\n",(scores[0] + scores[1] + scores[2]/3.0)); 
}

// in arrays it starts counting from 0 and if we use scores[3] then error may occur because array takes from 0 to n-1 spaces or locations

// so what if we want different scores later so we want the input from the user as scores

#include <stdio.h>
#include <cs50.h>

int maih(void){
    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");
    printf("Average: %f\n",(scores[0] + scores[1] + scores[2]/3.0)); 
}

// if error is implicit declaration of function get_int - then it means we have not included the particular header file

// make scores
// ./scores

// the above is bad design because we are using the same assigning of values over and over

// #include <stdio.h>
// #include <cs50.h>

// int maih(void){
//     int scores[3];
//     for (int i = 0; i < 3; i++)
//     {
//         scores[i] = get_int("Score: ");
//     }
//     printf("Average: %f\n",(scores[0] + scores[1] + scores[2]/3.0)); 
// }

// using 3 many times so instead of that as n and make it has constant because it wont be going to change the value 3 and takes onlythe 3 scores 
// while using constant we usually write in uppercase

#include <stdio.h>
#include <cs50.h>

int maih(void){
    const int N = 3; // it can be used outside main() then it will be globally accessible
    int scores[n];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n",(scores[0] + scores[1] + scores[2]/(float)N)); 
}

// in memory,
// scores[0] takes 4 bytes memory
// scores[1] takes 4 bytes memory
// scores[2] takes 4 bytes memory
// only size 3 so no need of scores[3]

// Questions: 
// is there any way to create an array just by using syntax alone without prompting the user for it?
// int array = {13,42,50}; //its not user friendly

// is there a way to calculate the length of an array?
// no, in C does not give the length of an array

// using function by passing the length and array /and we have take the length as our own or by the user and then get the return value of it

#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average(int length, int array[]);

int maih(void){
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n",average(N, scores)); 
}

float average(int length, int array[]){
    int sum = 0;
    for(int i = 0; i< length; i++){
        sum += array[i];
    }
    float sum / (float) length;
}


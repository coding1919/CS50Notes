// Storing the data: depend upon the programmer for which variable and type we have given to it
//  bool - 1 byte - actually bool uses 0 and 1 which is 2 bits and other 6 bits are waste
//  int - 4 byte - 32 bits (8*4) - so we can store up to 4 million for +ve or 2 billion +ve and 2 billion -ve
//  long - 8 byte - this also stores integer which is twice as int
//  float - 4 byte
//  double - 8 byte
//  char - 1 byte
//  string - depends byte
// the above is system dependent

// How do we get from the actual computer to information being represented ?
// RAM (random access memory)
// black chips on it is the bytes (megabytes or gigabytes - depends)
// it has different blocks in it and each blocks is a byte and has the particular address
// if char it will take 1 block , if int it will take 4 block, if long it will take 8 block
// its like a canvas that we see in the photos which is pixels - (canvas of bytes)

// how computer stores information using just bytes?
// Eg:
#include <stdio.h>

int main(void)
{
    int score1 = 72 ;
    int score2 = 73 ;
    int score3 = 33 ;
    printf("Average: %f\n",(score1+score2+score3)/3.0);
}

// if we do int / int it will give an int and throw away the the numbers after decimal point - (score1+score2+score3)/3
// int / float will give float
// (score1+score2+score3)/3.0

// in memory,
// score1 takes 4 bytes memory
// score2 takes 4 bytes memory
// score3 takes 4 bytes memory
// all will be stored in 0's and 1's pattern in bits 

// if we want n number of scores then the code will get messed up and we want to type n times and if we copy too we have to change the values and name for n times 

// so the best is to use arrays 
char c1 = 'H';
char c2 = 'I';
char c3 = '!';

//  char takes characters in single quotes

#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    printf("%c%c%c\n",c1,c2,c3);
}

// letters is similar to numbers 
// if printf("%i%i%i\n",c1,c2,c3); - then it will give o/p as 72,73,33

// in memory,
// c1 takes 1 bytes memory and stores a letter H
// c2 takes 1 bytes memory and stores a letter I
// c3 takes 1 bytes memory and stores a letter !

// strings - is the sequence of characters from left to right

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"
    printf("%s\n",s);
}

// in memory
// s is string which takes three bytes and it is one variable, s is an array of characters where
// s[0] = H
// s[1] = I
// s[2] = !

// because of cs50.h as string type we don't need to assign the size of string

// it will take a single character for s[0] so %c

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"
    printf("%c%c%c\n",s[0], s[1], s[2]);
}

// string does not have specific bytes so it has to assigned as the end of the string after particular word otherwise the whole memory is going to take char as a value - so for that there is a all 0 bits in the end of the string so every string has n+1 bytes
// s[3] = 0; - so we dont want to confuse it with 0 so it got a symbol like this
// s[3] = \0; - this is not going to print on the output but it will be in the memory location also we call it has null character - and all its bits are 0 (NUL)
// in ASCII O is NUL

// %i will give the integer of that character in this case
// %i for s[3] will give you the value 0 which is the null character or \0 - this is only in case of a=string because it has n+1 bytes and not in case of arrays
 
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!"
    printf("%i%i%i%i\n",s[0], s[1], s[2], s[3]);
}

// Questions: 

// are string structured differently in other languages?
// Yes, they are more powerful in other languages

// Is there no function to get the length of the string?
// there is a function, someone has to write the code for it


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HI!";
    string t = "BYE!";

    printf("%s\n",s);
    printf("%s\n",t);
}

// in memory:
// HI! in first 4 bytes because it includes \0 of s
// BYE! in next 5 bytes because it includes \0 of t

// s[0] = H
// s[1] = I
// s[2] = !
// s[3] = \0

// t[0] = B
// t[1] = Y
// t[2] = E
// t[3] = !
// t[4] = \0


// By using the one variable and user friendly as well as easier to access

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%s\n",words[0]);
    printf("%s\n",words[1]);
}

// in memory:
// HI! in first 4 bytes because it includes \0 of words[0]
// BYE! in next 5 bytes because it includes \0 of words[1]

// this is kind of 2 dimensional array:
// words[0][0] = H
// words[0][1] = I
// words[0][2] = !
// words[0][3] = \0

// words[1][0] = B
// words[1][1] = Y
// words[1][2] = E
// words[1][3] = !
// words[1][4] = \0

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%c%c%c\n",words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n",words[1][0], words[1][1], words[1][2], words[1][3]);
}

// Questions
// Can you have any array that has multiple data types in it?
// no, because not user friendly like other language and its sortof
// actually one specific array has the many elements of same data type 

// if you were to look past the end of one array, would you start to see the beginning of the second?
// printf("%c%c%c%c\n",words[0][0], words[0][1], words[0][2], words[0][3], words[0][4]);
// o/p -> 72 73 33 0 66 for %i
// o/p -> H  I  ! \0 B  for %c
// To count the length of the string

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get _string("Name: ");
    int n = 0;
    while(name[n]!='\0'){
        n++;
    }
    printf("%i\n",n);
}

// Using function

#include <stdio.h>
#include <cs50.h>

int string_length(string s);

int main(void)
{
    string name = get _string("Name: ");
    int length = string_length(name);
    printf("%i\n",length);
}

int string_length(string s){
    int n = 0;
    while(s[n]!='\0'){
        n++;
    }
    return n;
}

// we also have a string.h library
// strlen - which gives the length of the string. it is a built in function

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get _string("Name: ");
    int length = strlen(name);
    printf("%i\n",length);
}

// string.c

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get _string("Input: ");
    printf("Output: ");
    for(int i=0; i<strlen(s); i++){
        printf("%c",s[i]);
    }
    printf("\n");
}

// string.h
// its not better to call the strlen() function again and again instead let it assign to the variable and use that variable


#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get _string("Input: ");
    int length;
    printf("Output: ");
    for(int i=0; i<length; i++){
        printf("%c",s[i]);
    }
    printf("\n");
}

// another way

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get _string("Input: ");
    printf("Output: ");
    for(int i=0 , length = strlen(s); i<length; i++){
        printf("%c",s[i]);
    }
    printf("\n");
}

// ctype.h
// it is also an header file

// uppercase.c

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get _string("Before: ");
    printf("After: ");
    for(int i=0, n = strlen(s); i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c",s[i]-32);
        }
        else{
            printf("%c",s[i]);
        }
        printf("\n");
    }
}

// A is 65
// a is 97
// 97 - 65
// 32

// another method:

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get _string("Before: ");
    printf("After: ");
    for(int i=0, n = strlen(s); i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c",('a'-'A'));
        }
        else{
            printf("%c",s[i]);
        }
        printf("\n");
    }
    printf("\n");
}

// using library

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string s = get _string("Before: ");
    printf("After: ");
    for(int i=0, n = strlen(s); i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c",toupper(s[i]));
        }
        else{
            printf("%c",s[i]);

        }
        printf("\n");
    }
    printf("\n");
}

// basic method using library

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string s = get _string("Before: ");
    printf("After: ");
    for(int i=0, n = strlen(s); i<n; i++){
         printf("%c",toupper(s[i]));
    }
    printf("\n");
}
// Linear Search

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// return 0 is the success for the main function or code which means it is successfully executed 
// in general 0 is false and 1 is true but there is one success and many failure or error it may be so 0 as one success and other all integers as failures
// return 0 means successfully terminated from the main function in case of main
// whereas in other function it will terminate whenever it gets any return value to it
// in above program return 1 is not necessary but it can be used

// Linear Search using strings

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "canon", "iron", "thimble", "top hat"};
    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// to compare string we use strcmp function
// strcmp function compare the two strings based on ASCII-betical order
// that is by each letter of the both string like first letter of both is compared with the ASCII value of both if it is larger or small ASCII value or is it equal - for equal it returns 0
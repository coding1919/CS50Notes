// struct - can create a new data structure by comining different data type together
// It can be a variable that contains any number of other variables
// typedef - is a cryptic keyword that means define the following type and invent the following data type for me

// syntax:
// typedef struct
// {
//      string names;
//      string numbers;
// }
// person;

// it creates a new data type of type person which can have the value names and numbers as string

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-617-495-1000";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// Do we have to assign both name and the number when creating a person ? or can you only get away with assigning one of them ?
// You can, But that's going to be one of the garbage values, there it have some bogus data and unless we are careful as to never touch that field thereafter. You probably run the risk of some kind of bug, even a crash in a code, if we try to access that value later, even though we have never initialized it.So its possible but don't do that

// unsorted -> algorithm -> sorted
// 72541603 -> algorithm -> 01234567
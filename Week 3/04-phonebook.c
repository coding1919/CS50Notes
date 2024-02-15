#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David", "John"};
    string numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

// it best practice to use string for the numbers to which we won't do any operation like mathmatical addition or anything
// if we store it has integer it won't take dashes(-) or + symbols and also integer can overflow for larger values so its better to use strings



// in this there is separate name and separate number
// somethings smell not good about this code
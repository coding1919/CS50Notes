// problem solving technique which is ued in programming as well as in mathematics 
// it is a description for a function that calls itself
// function that calls itself is recursion

// Binary search recursive algorithm:
// if no doors left
    // return false
// if number behind middle door
    // return true
// else if number < middle door
    // Search left half 
// else if number > middle door
    // Search right half 

// sometimes program goes for infinite times as well which leads to crash or memory not sufficient

// also it leads to solution

// what is happening to the size of the problem for each of these lines?
// its been cut in half, so even though doing a exact same thing algorithmically again and again, Doing it in a smaller smaller samller input like fewer fewer fewer doors
// also there is a base case which helps not to go program infinite times

// phonebook algorithm:
// pick up phone book
// open to middle of the phone book
// look at page
// if person is on page
    // call person
// else if person is earlier in book
    // open to middle of left half of book
    // Go back to line 3
// else ifperson is later in book
    // open to middle of right half of book
    // go back to line 3
// else
    // quit 


// phonebook algorithm recursively:
// pick up phone book
// open to middle of the phone book
// look at page
// if person is on page
    // call person
// else if person is earlier in book
    // Search left half of book
// else ifperson is later in book
    // Search right half of book
// else
    // quit 

// its shorter algorithm with same logic
// actually there was the condition to go to line 3 go do more of that
// its like search algorithm is using a search algorithm inside of it 

// iteration.c

#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// recursion.c
#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // if nothing to draw
    if (n <= 0)
    {
        return;
    }
    // print pyramid of height n-1
    draw(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

// if we search recursion in google it will show recursion keyword again and again as we press it.
// Its like the defination of recursion
// This is the long standing easter egg 

// recursion is a powerful problem solving technique
// It reduces the amount of lines
// allowa to solve in a fundamentally different way by using computer's memory in interesting way
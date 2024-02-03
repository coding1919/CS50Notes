// scope - context in which variable exist

#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    int z = add(x,y);
    printf("%i\n",x + y);
}
// x and y are in the scope inside the main function only that is till curly braces ends

int add(int a, int b){
    return a + b;
}

// we can take number of inputs or argumenst inside the function

// we used return as type int which will return the integer value and when we call the function that return value should be stored in some variable and then we can use that variable to print the answer

// we can also do like this 
// printf("%i\n",add(x,y));

// In the definition of main, why do we show it as returning an integer, instaed of returning of void?
// whenever we write program if it finishes running, it actually returns a value somewhat secretly. It returns the number 0 by convention, which means all is well. and it can return any other integer if something goes wrong
// like if Mac or Pc or in phone  we get some weird message or numeric code like error -129 that means that some program that is running in the device had gone wrong with the main function that is the number returnedb 
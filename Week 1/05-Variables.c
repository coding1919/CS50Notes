// Assigning:
// int counter = 0;
// where counter is the name of the variable of type int to which the value zero is assigned

// Changing:
// counter = counter + 1; // counter += 1; // counter++; // they all are same
// counter = 0 + 1;
// counter = 1;

// for decrease
// counter = counter - 1; // counter -= 1; // counter--; // they all are same

// increasing and decreasing the value of variables is common in programming languages


// compare.c

// #include <cs50.h>
#include <stdio.h>

int main(void){
    // a = get_int("What is a? ");
    printf("What is a? ");
    int a = scanf("%d",&a);
    // b = get_int("What is b? ");
    printf("What is a? ");
    int b = scanf("%d",&b);
    if(a<b){
        printf("a is less than b \n");
    }
    else if(a>b){
        printf("a is not less than b \n");
    }
    else{
        printf("a is equal to b\n");
    }
}

// a

// string is more characters - double quotes
// char is single character - single quotes

// && - logical AND 
// || - logical OR

#include <stdio.h>
// #include <cs50.h>

int main(){
    char c = get_char("Do you agree? ");
    if(c=='y' || c=='Y'){
        printf("Agreed\n");
    }
    else if(c=='n' || c=='N'){
        printf("Not Agreed\n");
    }
    else{
        printf("Invalid\n");
    }
}


// creating a function
void meow(void){
    printf("meow\n");
}

// meow function has no return values and no inputs (arguments)

int main(void){
    for(int i=0; i<3; i++){
        meow();
    }
}

// we should define the function above the main code
// or it can be done by function prototype
void meow(void); // now this can be used above the main code and defining maybe below the main. It will work fine 



// using inputs or arguments

void meow1(int n);
void meow1(int n){
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    } 
}

int main(void){
    meow1(3);
}




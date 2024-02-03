// #include <stdio.h>
// #include <cs50.h>

// if i want to divide 1/3

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n",x / y);
}

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%f\n",x / y);
}

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z = x/y;
    printf("%f\n",z);
}
// 0.000000
// this is truncation
// if we take integer and divide it by integer even if we get a fraction value , the fraction just gets thrown away because we are only doing integer-based math. so if there is anything after the decimal point, it just gets truncated (discarded)
// solution: convert or cast 
// That is converting one type to other

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z = (float)x / (float)y;
    printf("%f\n",z);
}
//0.333333

// Floating point imprecision
// that we can't possibly represent the infinite number of real numbers that exist in the universe if you only have a finite amount of memory
// you would need an infinite number of bits 

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z = (float)x / (float)y;
    printf("%.3f\n",z); //0.333
    printf("%.5f\n",z); //0.33333
    printf("%.20f\n",z); //0.3333338787685989577
    // this is because computer has limited memory so it can show the closest that it can get 
}

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z = (double)x / (double)y;
    printf("%f\n",z);
}//0.333333333333333331483

// this is also because of memory

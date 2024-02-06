// Debugging using printf()

// we want print 3 bricks - but it prints 4 , so how to debug

// #include <stdio.h>

// int main(void){
//     for(int i=0; i<=3; i++){
//         printf("i is %i\n",i);
//         printf("#\n");
//     }
// }

// techniques to identifing the bug: 

// #include <stdio.h>

// int main(void){
//     for(int i=0; i<=3; i++){
//         printf("i is %i\n",i);
//         printf("#\n");
//     }
// }


// i is 0
// #
// i is 1
// #
// i is 2
// #
// i is 3
// #

// so we want to remove the i is 3 so we can use < instead of <=

// #include <stdio.h>

// int main(void){
//     for(int i=0; i<3; i++){
//         printf("i is %i\n",i);
//         printf("#\n");
//     }
// }

// #include <stdio.h>

// int main(void){
//     for(int i=0; i<=3; i++){
//         printf("#\n");
//     }
// }

// it is not good to use printf more and more to debug or find the bug in the code

// #include <stdio.h>
// #include <cs50.h>

// void print_column(int height);

// int main(void){
//     int n = get_int("Height: ");
//     print_column(n);
// }

// void print_column(int height){
//     for(int i=0; i<=height; i++){
//         printf("#\n");
//     }
// }

// powerful tool - debugger
// cs50 has a special command - debug50 - in its cloud VS code

// it needs the code to be compiled and it will not help in syntax error
// it helps in logical error

// make hello
// debug50 ./hello

// we have to give the breakpoint - it is stop of execution that you want the debugger to perform
// it is the red dot in VS code which will be in the code lines section we just have to tap the red dot

// again run it
// below breakpoint gets highlighted - which means it has not been executed

// variables - in it has local variable and also it shows in n = some garbage value and later it will store the value that we have typed in
// watch
// call stack - shows which function is executing

// on the top bar there are some tools:
// run program
// step over the highlighted line - if highlighted in 8 then after step over it will highlighted on 9 - which means line 8 is executed
// step into the code - if we press step into for ex when the line is highlighted in the particular function call in main and when we press step into then it will go through the code written in that function then we can step over one by one line or run
// step out the code
// restart
// stop - to off the debugger


// rubber duck debugging:
// it is talking to the inanimate object so that we can get through the logic by talking to it 

// we can ask help here
// rubber duck
// cs50.ai

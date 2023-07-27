#include <stdio.h>
#include <stdlib.h>

// About Function Pointers in C Language.

// Function Pointers are used to create Callback Functions.

int sum (int a , int b){


    return (a+b);
}

void greet(){

    printf("Hello world , Good Morning User");
}

int main(){

    printf("The sum of 2 and 3 is %d\n",sum(2,3)); //Test the function sum()

    // Declaration of Function Pointer.
    int (*fptr)(int , int);

    fptr = &sum;

    //Dereferencing a Function Pointer
    int d = (*fptr)(6,4);

    printf("Now the sum is %d\n",d);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// About Storage Classes in C Language

int sum;

int func1(int a , int b){

    // int sum;
    sum = a+b;

    return (sum);
}

int main()
{

    // Declaration - Telling the compiler about the variable (No space in the memory reserved)..
    
    // Definition - Declaration + Space reservation in the memory..
    
    
    int a;
    printf("The sum is %d\n",func1(3,5));

    // auto storage class are basically LOCAL VARIABLES.

    return 0;
}

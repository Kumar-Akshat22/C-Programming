#include <stdio.h>

// FUNCTIONS --> Call by value and Call by reference.


void changeValue(int *address){

    *address = 3457677; 

}


int main(){

    int a = 34, b = 56;

    printf("The value of a now is : %d\n",a);

    changeValue(&a);

    /*
    
    Above is the call for a function.

    It is Call By Reference.
    
    */

    printf("The value of a is : %d",a);

    return 0;
}

// Quick Quiz -->  Given two numbers a and b , add them , subtract them , and then assign the value to a and b using call by reference.

// a = 5
// b = 6

// after running the fuction the values of a and b should be -->

// a =  7
// b = -1
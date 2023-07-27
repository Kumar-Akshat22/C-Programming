#include <stdio.h>

#include <stdlib.h>

// About Wild Pointer in C Language. 

int main(){

    /*
    
    1. Uninitialized pointers are known as Wild Pointers.
    
    2. These pointers point to some arbitrary location in the memory and may cause a program to crash or behave badly.

    3. Derefrencing wild pointers can cause nasty bugs.

    4. It is suggested to always initialize unuse pointers to NULL.

    */

   int a = 334;
   
   int *ptr; //This is a Wild Pointer.

   *ptr = 34;  //This is not a good thing to do.

   ptr = &a; // ptr is no longer a wild pointer.

   printf("The value of a is :%d\n",*ptr);

    return 0;
}
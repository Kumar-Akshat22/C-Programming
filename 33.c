#include <stdio.h>

// About NULL Pointers in C Language.

int main(){

    int a = 10;

    int *ptr = NULL;
    ptr = &a;

    /*

    1. Above is the way of declaring a NULL Pointer.
    2. Above line indicates that pointer "ptr" is pointing nowhere in the memory.

    */

    // printf("%p\n",ptr);

    //We cannot dereference a NULL Pointer directly.

    if (ptr != NULL)
    {
        printf("The address of a is %p\n",ptr);
    }

    else{

        printf("The pointer is a NULL Pointer and cannot be dereferenced!\n");
    }
    
    return 0;
}
#include <stdio.h>

// POINTERS IN C PROGRAMING.

// POINTERS STORE THE ADDRESS OF ANOTHER VARIABLE.

// POINTER IS A SPECIAL TYPE OF DATA TYPE.

// '&' --> Address of something.
// '*' --> Dereference Operator (Value at the address).

int main()
{
    int a;
    printf("Let's Learn About Pointers.\n");

    a = 56;
    
    int *ptr = &a;
    printf("The address of %d is :%p\n",a,ptr);

    printf("The address of the pointer is :%p\n",&ptr);

    // '%x' --> It is the format specifier for hexadexcimal.

    // '%p' --> It is the format specifier for Pointers. 

    printf("The value at the above address is :%d\n",*ptr);

    int *ptr1 = NULL;
    printf("The address is :%p",ptr1);

    /*
    
    Uses of Pointer :

    1.Dynamic memory allocation.
    2.Arrays, Functions and Structures.
    3.Used to create Linked Lists.
    4.Pointer reduces the code and improves the performance.
    5.Returns multiple values from a function.
    
    */ 

    return 0;
}
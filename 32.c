#include <stdio.h>

// About Void Pointers in C Language

int main(){

    int a = 345;
    float b = 8.3;

    void *ptr1 , *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    // printf("The value of a is %d\n",(*ptr));

    // Above is not possible , We can't directly dereference a VOID POINTER.

    printf("The value of a is %d\n",*(  (int*)ptr1   )); 
    // But it can be done by Concept of typecasting a pointer.

    printf("The value of b is %f\n",*(  (float *) ptr2  ));

    return 0;
}
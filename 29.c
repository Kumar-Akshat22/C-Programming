#include <stdio.h>

#include <stdlib.h>

// IMPORTANT TOPIC
// Functions For Dynamic Memory Allocation.
// We have to include stdlib.h Header File.

int main()
{

    /*

    1. In Dynamic Memory Allocation , Memory is Allocated in the "Heap" section.

    2. We have four functions that helps us achieve this task:

        malloc
        calloc
        realloc
        free

    3. malloc() stands for Memory Allocation.

    4. calloc() stands for contiguous allocation.

    5. realloc() stands for reallocation.

    */

    // Using malloc()

    int *ptr;
    int s;

    // printf("Enter the size of the Array you want\n");
    // scanf("%d",&s);

    ptr = (int *)malloc(s * sizeof(int));

    // Above is nothing but, simply a Dynamically Allocated "ARRAY".

    // for (int i = 0; i < s; i++)
    // {

    //     printf("Enter the value at the %d position of the array\n",i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int j = 0; j < s; j++)
    // {
    //     printf("The value at %dth position of the array is %d\n",j+1,ptr[j]);
    // }

    int *ptr1;
    int in;

    printf("Enter the value of the size of the Array you want\n");
    scanf("%d", &in);

    ptr1 = (int *)calloc(in, sizeof(int));

    for (int i = 0; i < in; i++)
    {
        printf("Enter the value at the %d position of the array\n", i);
        scanf("%d", &ptr1[i]);
    }

    for (int j = 0; j < in; j++)
    {
        printf("The value at %dth position of the array is %d\n", j + 1, ptr1[j]);
    }

    // Use of realloc()

    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &in);

    ptr1 = (int *)realloc(ptr1, in * sizeof(int));

    for (int i = 0; i < in; i++)
    {
        printf("Enter the value at %d postion of the array\n", i);

        scanf("%d", &ptr1[i]);
    }

    for (int j = 0; j < in; j++)
    {
        printf("The value at the %d position of the array is %d\n", j + 1, ptr1[j]);
    }

    free(ptr1);

    return 0;
}

// QUIZ --> Make a program to demonstrate the use of free() in between the program.
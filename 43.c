#include <stdio.h>
#include <stdlib.h>

// About Memory Leak in C Language.

int main(){

    int a , i = 0;

    int *i2;

    while (i<45555)
    {
        printf("Welcome to Code with Akshat!");
        i2 = malloc(3444*sizeof(int));

        if(i%100 == 0){

            getchar();
        }

        i++;

        free(i2);
        // Without using free() function situation of "memory leak" will arise.
    }

    
    

    return 0;
}
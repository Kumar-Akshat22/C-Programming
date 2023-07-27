#include <stdio.h>

// C Program to interchange the value of two variables.

void swap(int *a1 , int *b1){

    int temp;

    temp = *a1;
    *a1 = *b1;
    *b1 = temp;


}

int main(){

    int a = 23 , b = 34;

    printf("The values of a and b are %d and %d\n",a,b);

    swap(&a , &b);

    printf("The values of a and b after interchanging are %d and %d\n",a , b);

    return 0;
}
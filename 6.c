#include <stdio.h>

#define PI 3.14 //Another Way of defining constant value.

int main(){
    
    // Format Specifiers.

    // %c --> character
    // %d --> integer
    // %f --> float
    // %l --> long
    // %lf --> double
    // %LF --> long double


    float a=3.57;

    // %a.bf --> Format Specifier.

    // printf("%10.4fThis",a);

    // printf("%-20.6fThis",a);

    const int b = 5.14;
    
    // b=5.23;  Wrong , as b has a constant value.

    // printf("%d",b);

    // Escape Sequences
    printf("\a");

    printf("tab character\tmy backslash \n %f\n",PI);

    printf("******\n");
    printf("*****\n");
    printf("****\n");
    printf("***\n");
    printf("**\n");
    printf("*");

    return 0;
}
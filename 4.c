#include <stdio.h>

int main()
{

    int a;

    float b;

    a = 36;
    b = 6.0;

    // ARITHMETIC OPERATORS.

    // printf("The sum of a and b is :%f\n",a+b);
    // printf("The product of a and b is :%f\n",a*b);
    // printf("The subtraction of a and b is :%f\n",a-b);
    // printf("The division of a and b is :%f\n",a/b);

    // RELATONAL OPERATORS.

    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a<=b);
    printf("%d\n",a>=b);

    

    // LOGICAL OPERATORS.

    // && , || , !
    // AND , OR , NOT(COMPLIMENT)

    // int c,d;
    // c=0;
    // d=35;

    // printf("%d\n",c&&d);
    // printf("%d\n",c||d);
    // printf("The compliment of c is :%d\n",!(c&&d));

    // BITWISE OPERATORS --> WORKS ON 'bits'

    // int e, f;
    // e = 2;
    // f = 3;
    
    // '^'--> XCLUSIVE OR OPERATOR --> NEEDS ONE TRUE AND ONE FALSE VALUE.

    // printf("%d\n", e & f);
    // printf("%d\n", e ^ f);

    return 0;

    
}
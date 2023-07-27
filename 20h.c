#include <stdio.h>

// QUIZ OF CALL BY REFERENCE.

int sum(int m1 , int m2){

    int c;
    c = m1 + m2;

    return c;
}

int sub(int m3 , int m4){

    int d;
    d = m3 - m4;

    return d;
}

void assign(int *p1 , int *p2){

    *p1 = 12;

    *p2 = 2;

}

int main(){

    int a,b;

    a= 7;
    b= 5;

    printf("The sum is : %d\n",sum(7 , 5));

    printf("The subtraction is : %d\n",sub(7 , 5));

    printf("Now the values of a and b are : \n");

    assign(&a , &b);

    printf("%d \n %d \n",a , b);



    return 0;
}
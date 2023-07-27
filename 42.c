#include <stdio.h>
#include <stdlib.h>

// Application of Function Pointers in Callback Functions in C Language.

int sum(int a , int b){

    return (a+b);
}

float avg(float a1 , float b1){

    return((a1 + b1)/2);

}

void greetHelloAndExecute(int (*fptr)(int , int)){

    printf("Hello User!\n");

    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}

void greetGmAndExecute(int (*fptr)(int , int)){

    printf("Good Morning User\n");

    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}

void greetGnAndExecute(float(*fptr)(float , float)){

    float a, b;

    printf("Good Afternoon User\n");

    printf("Enter First Number :\n");

    scanf("%f",&a);

    printf("Enter Second Number :\n");

    scanf("%f",&b);

    printf("The average of %f and %f is :%f\n",a,b,fptr(a,b));

}

void greetGeAndExecute(float(*fptr)(float , float)){

    float a , b;

    printf("Good Evening User !\n");

    printf("Enter the First Number :\n");

    scanf("%f",&a);

    printf("Enter the Second Number :\n");

    scanf("%f",&b);

    printf("The average of %f and %f is :%f\n",a,b,fptr(a,b));


}

int main(){
    

    // int (*ptr)(int , int);

    // ptr = &sum;
    // ptr = sum;

    // Above both are correct way.

    // greetHelloAndExecute(ptr);

    // greetGmAndExecute(ptr);

    printf("The time is:%s\n",__TIME__);

    float (*ptr)(float , float); 
    ptr = avg;

    // greetGnAndExecute(ptr);

    greetGeAndExecute(ptr);


    return 0;
}
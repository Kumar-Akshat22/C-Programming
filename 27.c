#include <stdio.h>

// About Types of Variables in C Language.

int b = 34;

// Above b is a Global Variable because it is not the part of any Function.

int ret(){

    return (43*34);
}

int func1(int b1)
{

    int loc;
    
    // Here loc is a LOCAL VARIABLE.

    static int myvar = 0;

    // static int a = ret;

    /*
    
    The above line will create problems -->

    1. We cannot initialize static variable with a function.
    2. Compiler has to initialize a STATIC VARIABLE before the execution of main function.
    
    */

    
    
    printf("The value of myvar is : %d\n", myvar);
    myvar++;

    printf("The value of b inside func1 is %d\n",b);

    printf("The address of b inside func1 is %d\n",&b);

    return b1 + myvar;
}

int main()
{
    // Static Variables always need constant literal i.e. a constant value.

    int b = 344;

    // printf("The value of loc is : %d\n",loc);
    
    // Above line will create problems as "loc" is a local variable and is a part of only func1.

    printf("The address of b in main() function is %d\n", &b);
    
    int val = func1(b);

    // After the execution of above Line of Code the value of myvar will be 1.

    val = func1(b);

    // After the execution of the above line of code the value of myvar will be retained from the previous call i.e. 1 and the it will be incremented by 1.

    val = func1(b);

    int *ptr = &val;

    printf("The value returned by func1() is :\n%d\n", val);

    return 0;
}
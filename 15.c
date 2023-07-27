#include <stdio.h>

// RECURSIONS.

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return (n * factorial(n-1));
    
}

// Factorial of 5 -->
// This will breakdown like this :

// factorial(5) = 5 * factorial(4)
//              = 5 * 4 * factorial(3)
//              = 5 * 4 * 3 * factorial(2)
//              = 5 * 4 * 3 * 2 * factorial(1)  
             
             //factorial(1) is termination condition.

// factorial(5) = 5 * 4 * 3 * 2 * 1 = 120


int main()
{
    int num;

    printf("Enter the number to find it's factorial :");

    scanf("%d",&num);


    printf("The factorial of %d is : %llu\n",num,factorial(num));

    return 0;
}

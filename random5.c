#include <stdio.h>

// Factorial using Iterative Approach.

int main(){

    int n;
    int fact = 1;

    printf("\t\t\t\t*****Welcome To The Factorial Program*****\t\t\t\t\n");

    printf("Enter the number to find it's Factorial :\n");

    scanf("%d",&n);

    if (n == 1 || n == 0)
    {
        printf("The factorial is : 1\n");
    }
    

    else{

        for (int i = n; i >= 2; i-=2)
        {
            fact = fact * (i * (i-1));
        }

        printf("The Factorial of %d is %d\n",n,fact);
    }



    return 0;
}
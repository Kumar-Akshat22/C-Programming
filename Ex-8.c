// Write a C Program to find the sum of the first n elements of fibonacci series using Recursion as well as Iterative approach.

#include <stdio.h>

int fib_iterative(int n){

    int sum , n1 = 0 , n2 = 1;
    sum = n1 + n2;

    for (int i = 1; i < (n+1); i++)
    {

        if (n == 2)
        {
            /* code */
        }
        

    }

    return sum;
    


}


 

int main()
{


    int in;
    
    printf("Enter an integer number of your choice :\n");

    scanf("%d",&in);

    printf("The sum of first %d elements is :%d\n",in,fib_iterative(in));

    

    return 0;
}
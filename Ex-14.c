#include <stdio.h>
#include <math.h>

// C Program to find the prime numbers in a given range.

int checkprime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            return 0;
        }
    }

    return 1;
}

int main()
{

    int l, u;

    printf("Enter the value of the lower limit of the range in which you want to find the prime numbers :\n");

    scanf("%d", &l);

    printf("Enter the value of the upper limit of the range in which you want to find the prime numbers :\n");

    scanf("%d", &u);

    printf("The prime numbers in the range [%d , %d] are :\n", l, u);

    for (int i = l; i < (u + 1); i++)
    {
        if (checkprime(i))
        {

            printf("%d\n", i);
        }
    }

    return 0;
}
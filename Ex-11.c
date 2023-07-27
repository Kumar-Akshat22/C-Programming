// C Program to find whether the entered number is prime or composite.

#include <stdio.h>
#include <math.h>

int main()
{

    int flag = 0;
    int n;

    printf("Enter the number you want to check for Prime :\n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("It is neither prime nor composite\n");
    }

    else if (n > 1)
    {

        for (int i = 2; i <= sqrt(n); i++)
        {

            if (n % i == 0)
            {
                flag++;
            }
            
        }

        if (flag > 0)
        {
            printf("The number %d is not a prime number\n", n);
            printf("It has %d factors\n",flag);
        }

        else
        {

            printf("The number %d is prime number\n", n);
        }
    }

    return 0;
}

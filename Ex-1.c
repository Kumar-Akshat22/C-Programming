#include <stdio.h>

// PRINTING THE MULTIPLICATION TABLE OF A RANDOM ENTERED NUMBER.

int main()
{

    int a;

    printf("Enter the number you want the multiplication table of :\n");

    scanf("%d", &a);

    printf("The multiplication table of %d is:\n", a);

    for (int i = 1; i <= 10; i++)
    {
        int b;
        b = a * i;

        printf("%d\n", b);
    }

    return 0;
}
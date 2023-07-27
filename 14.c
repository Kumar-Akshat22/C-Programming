#include <stdio.h>

// ABOUT FUNCTIONS AND FUNCTION PROTOTYPING.

int sum(int a, int b);

void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}

int takeNumber()
{

    int i;
    printf("Enter a number : ");

    scanf("%d", &i);

    return i;
}

int main()
{

    int a, b, c , d;

    a = 9;

    b = 67;

    c = sum(a, b);

    printStar(7);

    printf("The sum of %d and %d is : %d\n", a, b, c);

    d = takeNumber();

    printf("The number entered is : %d",d);

    return 0;
}

int sum(int a, int b)
{

    return a + b;
}
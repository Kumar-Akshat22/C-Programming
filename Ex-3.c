#include <stdio.h>

// Take input from the user and ask user to choose 0 for triangular star pattern and choose 1 for reverse triangular star pattern.

void starPattern()
{

    int num_row;
    printf("Enter the number of rows upto which you want to print the pattern  :  ");

    scanf("%d", &num_row);

    printf("The star pattern is : \n");

    for (int i = 1; i <= num_row; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void reversestarPattern()
{
    int num_row2;

    printf("Enter the number of rows upto which you want to print the pattern :  ");

    scanf("%d", &num_row2);

    for (int m = 1; m <= num_row2; m++)
    {
        for (int n = num_row2; n >= m; n--)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{

    int input;

    printf("\t\tHi,Welcome To Star Pattern Program!\t\t\n\n");

    printf("Press 0 for first type of star pattern!\n");
    printf("Press 1 for second type of star pattern!\n\n");

    printf("Enter your choice :\n");

    scanf("%d", &input);

    switch (input)

    {

    case 0:
        starPattern();

        break;

    case 1:

        reversestarPattern();

        break;

    default:

        printf("Invalid Choice! Please Try Again......");
        break;
    }

    return 0;
}
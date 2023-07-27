#include <stdio.h>

// SWITCH CASE IN C
// switch case expression must be an integer or a character.

int main()
{

    int age,marks;
    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your marks: \n");
    scanf("%d",&marks);

    switch (age)
    {

    case 3:
        printf("The age is 3.\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45.\n");
            break;
        
        default:
        printf("Your marks is not 45.\n");
            
        }
        break;

    case 13:
        printf("The age is 13.");
        break;

    case 23:
        printf("The age is 23.");
        break;

    default:
        printf("The age is not 3 , 13 or 23.");
        
    }

    return 0;
}

// TASK --> Make a switch program of your own.


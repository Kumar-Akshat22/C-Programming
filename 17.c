#include <stdio.h>

// ABOUT ARRAYS (1-D , 2-D).

int main()
{

    // int marks[4];

    // marks[0] = 34;
    // printf("The marks student 1 is : %d\n",marks[0]);

    // marks[0] = 44;

    // printf("The marks of student 1 is : %d\n",marks[0]);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the marks of student %d : \n", i + 1);
    //     scanf("%d", &marks[i]);
    // }

    // printf("You have successfully enetered the marks of 4 students!\n");

    // for (int j = 0; j < 4; j++)
    // {
    //     printf("Marks of student %d is : %d\n", j + 1, marks[j]);
    // }

    // 2-D ARRAY (MATRIX) -->

    int marks[2][3] = {{7, 2, 9}, {4, 5, 8}};

    printf("The 2 cross 3 Matrix is :\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("The element at %d , %d position is : %d\n",i + 1,j + 1,marks[i][j]);

            printf("%d ", marks[i][j]);
        }

        printf("\n");
    }

    return 0;
}
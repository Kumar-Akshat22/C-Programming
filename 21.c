#include <stdio.h>

// PASSING ARRAYS TO A FUNCTION .

int func1(int array[])
{

    for (int i = 0; i < 4; i++)
    {
        printf("The vallue at position %d is %d\n", i, array[i]);
    }

    array[0] = 249;

    array[3] = 650230;

    // The above two points are very important.

    /*

    On passing the array as the argument to a function it
    doesn't get copied rather addresses are stored.

    That's why if value at any index is changed here it also gets reflected in the main function.

    */

    return 0;
}

int func2(int *ptr)
{

    for (int i = 0; i < 4; i++)

    {

        printf("%d\n", *(ptr + i));
    }

    *(ptr + 2) = 98;

    return 0;
}

void func3(int arr2[2][2])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", arr2[i][j]);
        }

        printf("\n");
    }
}

int main()
{

    int arr[] = {23, 24, 25, 16};

    // printf("The value at position 1 is : %d\n",arr[0]);

    // func1(arr);

    // printf("The value at the postion 1 is : %d\n",arr[0]);

    // printf("The value at position 4 is : %d\n",arr[3]);

    // func2(arr);

    // func2(arr);

    int arr1[2][2] = {{23, 43},
                      {78, 54}};

    func3(arr1);

    return 0;
}
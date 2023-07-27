#include <stdio.h>

// C Program to find number of similar elements in an array.

int main()
{

    int arr[] = {0, 1, 1, 0};

    int length = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n",length);

    printf("The similar elements are : \n");

    for (int i = 0; i < length; i++)
    {

        for (int j = i+1; j < length; j++)
        {

            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[j]);
            }
        }
    }

    return 0;
}
#include <stdio.h>

// About Pointer Arithmetic and Arrays.


int main()
{
    
    int a = 3;

    int *ptra = &a;

    printf("%d\n",ptra);

    ptra++;

    printf("%d\n",ptra);

    printf("%d\n",ptra + 1);
    printf("%d\n",ptra + 2);

    // In Pointer Arithmetic and Array Arithmetic System Architecture is important.

    int arr[] = {1,2,3,4,5,6,7,34};
    
    // printf("Value at position 4 is : %d\n",arr[3]);

    printf("The address of the First element of the array is : %d \n",&arr[0]);

    printf("The addres of the first element of the arrary is : %d\n",arr);

    printf("The address of the second element of the array is : %d\n",&arr[1]);

    printf("The address of the second element of the array is : %d\n",arr+1);

    printf("The address of the third element of the array is : %d\n",&arr[2]);

    printf("The address of the third element if the array is : %d\n",arr+2);

    printf("The value at the address of first element is : %d\n",*(&arr[0]));

    printf("The value at the address of the first element is :%d\n",*arr);

    printf("The value at the address of the second element is : %d\n",*(&arr[1]));

    printf("The value at address of the second element is : %d\n",*(arr+1));

    // arr++ --> Will throw an error as arr contains an address of element 1  which is a constant.

    // But above can be done with the help of Pointers.

    int *ptr = arr;

    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);


    /* Conclusion --> 1. Pointer Arithmetic And Array Arithmetic are same.
                      2. An Array is a Pointer.
    */


    return 0;
}
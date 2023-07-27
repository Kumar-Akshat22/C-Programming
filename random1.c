#include <stdio.h>

void input(int ar[5]){

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at %d position of the array:\n",i+1);
        scanf("%d",&ar[i]);
    }
    
}

int sumar(int ara[5]){

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + ara[i];
    }

    return sum;
    
}

int main()
{
    int arr[5];
    input(arr);

    printf("The sum of the elements of the array is %d\n",sumar(arr));
    return 0;
}
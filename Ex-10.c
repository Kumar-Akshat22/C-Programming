#include <stdio.h>

// C Program to find the maximum of the elements of an array.

// void changearr(int arr[6]){

//     arr[4] = 90;
// }

int main(){

    int arr[6] = {67,98,34,1,78,100};

    int min = arr[1];

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }

    printf("The minimum of the elements of the array is %d\n",min);
    
    // int max = 0;

    // for (int i = 0; i < (6); i++)
    // {

    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }

    // printf("The largest element of this array is %d\n",max);

    // for (int j = 0; j < 6; j++)
    // {
    //     if (arr[j] < max)
    //     {
    //         max = arr[j];
    //     }
        
    // }
    
    // printf("The smallest element of this array is %d\n",max);
    

    // printf("%d\n",arr[4]);
    // changearr(arr);

    // printf("%d\n",arr[4]);
    

    return 0;
}
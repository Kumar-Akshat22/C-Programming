#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rev_arr(int *arr , int num){
    
    int temp;
    
    for (int i = 0; i < sqrt(num); i++) {
        
        temp = arr[num - i];
        arr[num - i] = arr[i];
        arr[i] = temp;
    }
    
    
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    
    rev_arr(arr , num);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
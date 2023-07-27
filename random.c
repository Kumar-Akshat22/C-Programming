#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rev_arr(int *arr , int size){

    int temp;

    for (int i = 0; i < (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    

    

}

int main(){

    int num , *arr;
    scanf("%d\n",&num);
    arr = (int*)malloc(num*sizeof(int));

    for (int i = 0; i < num; i++)
    {
        scanf("%d",arr+i);

    }

    rev_arr(arr , num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ",*(arr+i));
    }
    
    


}

// int main()
// {
//     int a = 4 , b = 3 , c = 7;

//     if (a >= b)
//     {
//         printf("Hey Working!\n");
//     }
    
//     else if (a == b)
//     { 
//         printf("again working\n");
//     }

//     else if(a > b){

//         printf("Work\n");
//     }
    

//     else if (a == 4)
//     {
//         printf("wow working\n");
//     }

//     else{

//         printf("not working\n");
//     }
    
//     return 0;
// }
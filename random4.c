#include <stdio.h>

int main(){

    int arr[4] = {2,6,4,3};

    int *p;

    p = &1[arr];
 
    p++;

    printf("%d\n",*(p));


    return 0;
}
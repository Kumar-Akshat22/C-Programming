#include <stdio.h>

// C Program to print PYRAMID PATTERN.

void pyrPattern(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n); j++)
        {

            if (j >= n-1-i && j <= n-1+i)
            {
                printf("*");
            }

            else{

                printf(" ");
            }
            

        }

        printf("\n");
        
    }
    
}

int main(){

    int norows;

    printf("Enter the number of rows upto which you want the PYRAMID PATTERN :\n");
    scanf("%d",&norows);

    printf("The PYRAMID PATTERN upto %d rows is :\n",norows);
    pyrPattern(norows);

    return 0;

}
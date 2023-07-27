#include <stdio.h>

void smallestelement(int A[2][3]){

    int a = A[0][0];

    for (int i = 0; i < 2; i++)
    {
        /* code */

        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] < a)
            {
                a = A[i][j];
                
            }
            
        }
        

        printf("The smallest element in the first row is %d\n",a);

    }
    int b = 0;
    
    printf("The smallest element in the second row %d\n",a);


    // for (int k = 0; k < 3; k++)
    // {
        
    // }
    

    for (int i = 0; i < 2; i++)
    {
        if (A[i][0] > b)
        {
            b = A[i][0];
        }
        
    }

    printf("The largest element in the first column is :%d\n",b);

    // if (a == b)
    // {
    //     printf("The smallest element in the first row and first column is %d\n",A[1][1]);
    // }

    
    
    
}

int main(){

    int m = 2, n = 3;

    int A[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of the element at the %d , %d position:\n",i,j);
            scanf("%d",&A[i][j]);
        }
        
    }
    smallestelement(A);

    return 0;

    
}
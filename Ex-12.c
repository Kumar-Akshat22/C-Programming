#include <stdio.h>

// C Program to convert Decimal Number to Binary. 

int main(){

    int n , i ,rem;
    
    int bin[10];

    printf("Enter the number to find it's binary equivalent:\n");
    scanf("%d",&n);
    
    printf("The binary equivalent of %d is :\n",n);

    while (n)
    {
        rem = n % 2;
        n = n/2;
        bin[i] = rem;

        i++;
    }


    for (int j = i-1; j >= 0 ; j--)
    {
        printf("%d",bin[j]);
    }
    
    return 0;
}
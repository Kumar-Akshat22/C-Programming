#include <stdio.h>

// C Program to reverse a number entered by the user.

int reversenumber(int n){
    
    int rev = 0 , rem;

    while (n != 0)
    {
        rem = n%10; //Last digit of n
        rev = (rev*10) + rem;
        n = n / 10;

    }

    return rev;

}

int main(){

    int num;

    printf("Enter the number :\n");
    scanf("%d",&num);
    
    printf("The reversed number is :%d\n",reversenumber(num));

    return 0;
}
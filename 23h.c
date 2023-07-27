#include <stdio.h>
#include <string.h>

// C Program to take TWO STRINGS as an input from the user and CONCATENATE them.

int main(){

    char s1[24] , s2[24];

    printf("Enter your Name :\n");
    gets(s1);

    printf("Enter the name of your Friend :\n");
    gets(s2);
    
    // char s3[58] = strcat(s1 , s2);

    printf("%s are FRIENDS....\n",strcat(s1 , s2));
    

    return 0;
}
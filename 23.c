#include <stdio.h>

#include <string.h>

// About string.h Library and its functions.

int main(){

    char s1[7] = "akshat";
    char s2[8] = "pradeep";
    char s3[54];


    // puts(strcat(s1 , s2));
    printf("The length of s1 is : %ld\n",strlen(s1));
    printf("The length of s2 is : %ld\n",strlen(s2));

    printf("The length of concatenated string is : %ld\n",strlen(strcat(s1 , s2)));

    // Use "%ld" format specifier for printing the length of the string.

    // printf("The reversed string s1 is :");

    // char str[] = strrev(s1);

    // Using strrev function is giving an error.
    // "strrev" is no longer part of GCC Compiler.

    // printf("%s",str);

    strcpy(s3 , "akshatpradeep");
    puts(s3);
    // printf("%s\n", s3);
    

    char str_1[10];
    strcpy(str_1 , "hello");

    puts(str_1);

    printf("\nThe strcmp for s1 , s2 returned is %d\n" , strcmp(s1 , s2));

    return 0;
}

// QUIZ --> Allow user to enter TWO STRING and then concatenate them by saying that they are friends.
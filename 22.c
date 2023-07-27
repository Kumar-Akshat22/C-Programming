#include <stdio.h>

// ABOUT STRINGS IN C LANGUAGE.

// STRING IS NOT A DATA TYPE.

// We can use the concept of "ARRAYS" to print string and take input as well.

void printStr(char strz[])
{

    int i = 0;

    while (strz[i] != '\0')
    {
        printf("%c", strz[i]);

        i++;
    }

    printf("\n");
}

int main()
{
    // 1st Part of the Program -->

    // char str[] = {'a', 'k', 's', 'h', 'a', 't'};
    // The above is not the correct way.

    char str1[] = {'a' , 'k' , 's' , 'h' , 'a' , 't' , '\0'};
    // Above is more appropriate way.

    // printf("%c\n", str1[5]);

    // printStr(str1);

    // char str3[7] = "akshat";

    // printf("%s",str4);

    // puts(str4);

    // char str[6];
    // str = "hello";
    
    // The above line will create problems, because str is an array and "hello" is a string.
    
    // The alternative to the above problem is using "strcpy" functionality of "string.h" library.

    // 2nd Part of the Program -->

    char name[34];
    // printf("Enter your name :");

    // gets(name);

    // printf("Your name is %s\n" , name);

    /* Alternative to gets() function.

       We can use fgets(name of the array , length of the array , stdin) function.

    */

    printf("Hi there, Enter your name:\n");

    fgets(name, sizeof(name), stdin);
    printf("Your name is :\n%s", name);

    
    return 0;
}

/* QUIZ --->

    char str[5];
    str = "hello";

    what will the above code produce ?

    */
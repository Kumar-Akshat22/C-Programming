#include <stdio.h>

int main()
{

    FILE *ptr = NULL;

    ptr = fopen("myfile.txt","a");

    // char c = fgetc(ptr);

    // printf("The character i read was %c\n",c);

    // c = fgetc(ptr);

    // printf("The charcter is %c\n",c);

    // char str[6];

    // fgets(str , 5 , ptr);

    // printf("The string is %s\n",str);

    // fputc('o',ptr);

    fputs("\nThis is Kumar Akshat",ptr);

    fclose(ptr);
    
    return 0;
}
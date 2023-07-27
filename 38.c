#include <stdio.h>

int main()
{

    FILE *ptr = NULL;

    char string[54] = "This is Linux OS";

    // Reading a File

    // ptr = fopen("myfile.txt","r");

    // fscanf(ptr , "%s" , string);

    // printf("The content of this file is : %s\n",string);

    // Writing a File

    // ptr = fopen("myfile.txt","w");
    // In the above the file is being opened in write mode which means that the new content that will be inserted in the file will erase the previous content.

    ptr = fopen("myfile.txt","a");
    // In the above we are opening the file in append mode which means that the new content will be inserted in the file but without hampering the previous content.

    fprintf(ptr , "%s" , string);
    // fprintf function is used to write some data to a Pre Existing file.

    fclose(ptr);

    return 0;
}
#include <stdio.h>
#include <string.h>

void revArray(char str[]){
    
    char temp;

    for (int i = 0; i < (7/2); i++)
    {
        temp = str[i];
        str[i] = str[6 - i];
        str[6 - i] = temp;
    }

}

int main(){

    char str[7] = "akshat";

    revArray(str);
    
    for (int j = 0; j < 6; j++)
    {
        printf("The value at %d is :%c\n",j+1,str[j+1]);
    }
    
    return 0;
}


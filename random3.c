#include <stdio.h> 

int main(){

    char arr[3];
    int sum = 0;

    for (int j = 0; j < 3; j++)
    {
        printf("Enter a character of your Choice :");
        
        scanf("%c",&arr[j]);
        getchar();
        
    }

    /*

    1. Actually , in the above for loop the loop will run for 3 times.
    
    2. When the above loop runs for j = 1 , the printf() and scanf() statements are not executed.
    
    3. Use getchar() after scanf() to read an extra newline.

    */ 

    

    for (int i = 0; i < 3; i++)
    {

        printf("The ASCII value is %d\n",arr[i]);

        sum = sum + (int)arr[i];
    }

    printf("The sum of the ASCII Values is %d\n",sum);
    

    return 0;
}
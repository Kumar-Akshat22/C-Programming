#include <stdio.h>

// BREAK AND CONTINUE STATEMENTS.

int main(){
    
    int i, age;

    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age : \n",i);
        scanf("%d",&age);
        
        if (age == 10)
        {
            break;
        }

        if (age > 10){
            
            continue;
        }
        
        printf("We have not come across any continue statements.");
        
    }


    
    return 0;
}
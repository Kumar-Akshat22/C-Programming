#include <stdio.h>

// GOTO STATEMENTS.

// "goto" statements are a bit confusing for fellow programmers.
// It makes the code less understandable.

int main(){
    
    // label:
    //     printf("We Are Inside A Label!");
    //     goto end;
    
    // printf("Hello! World");

    // goto label;

    // end:
    // printf("We Are At End.");

    int num;

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number.Enter 0 to exit : ");
            scanf("%d",&num);

            if (num == 0)
            {
                goto end;
            }
            
        }
        
    }

    end:
    
    return 0;
}
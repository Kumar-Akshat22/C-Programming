#include <stdio.h>

// FOR LOOP.

int main(){

    // for loop is used iterate (repeat several times) the statements or a part of program several times.

    // used to traverse arrays and linked lists.

    int j,i;

    for ( i = 0,j = 0; i < 5; i++)
    {
        printf("%d %d\n",j,i);
    }

    for (i = 0, j = 0; i < 5, j <2; i++, j++)
    
    /* The last Condition is treated as deciding condition.
    Only if it is inside the FOR LOOP bracket.*/
    
    {
        printf("%d %d\n",i, j);
    }
    
    for (i= 0,j= 0; j < 2;)
    
    // We can declare any of the FOR LOOP expressions outside the brackets.

    // Minimum Two expressions must be present inside the for loop bracket.

    // Condition of Termination written inside the FOR LOOP bracket is only considered important.

    {
        i < 5;
        printf("%d %d\n",i, j);
        i++, j++;
    }
    
    
    
    return 0;
}
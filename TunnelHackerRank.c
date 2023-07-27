#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct Parallelopiped
{
   int length;
   int breadth;
   int height;
}box;

int volume(int l , int b , int h){

    return (l*b*h);
}

int main(){

    int n;
    scanf("%d",&n);

    box * crate = (box*)malloc(n*sizeof(box));

    //Taking Input

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&crate[i].length,&crate[i].breadth,&crate[i].height);
        printf("\n");

    }

    for (int i = 0; i < n; i++)
    {
            if (crate[i].height < MAX_HEIGHT)
            {
                printf("%d\n",volume(crate[i].length , crate[i].breadth , crate[i].height));
            }
            
    }
    
    

    return 0;
}
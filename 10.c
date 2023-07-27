#include <stdio.h>

int main(){
    int l,b,p;
    printf("Enter the length of the rectangle :\n");
    scanf("%d",&l);

    printf("Enter the breadth of the rectangle :\n");
    scanf("%d",&b);

    p = 2*(l+b); 
    
    printf("The perimeter of the rectangle is :%d",p);

    return 0;
}
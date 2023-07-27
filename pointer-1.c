#include <stdio.h>

void fun1(int *a , int *b , int c){

    c = *a+*b;
    *a = c;
    *b = *b + c;

    printf("%d\n",c); 

}

int main(){

    int a = 10 , b = 20 , c = 0;

    printf("%d %d %d\n",a,b,c);
    fun1(&a , &b , c);
    printf("%d %d %d\n",a,b,c);

    return 0;
}
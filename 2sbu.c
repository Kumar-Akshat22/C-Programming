#include <stdio.h>

int main(){

    float base,height;
    float area;

    printf("Enter the value of the base of triangle : ");
    scanf("%f",&base);

    printf("Enter the value of height of the triangle :");
    scanf("%f",&height);

    area = 0.5 * base * height;
    printf("The value of area of this triangle is :%f",area);

    return 0;
}
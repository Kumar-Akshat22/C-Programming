#include <stdio.h>

#define PI = 3.14

// Write a program to find area of circle.

int main()
{
    float radius,area,circumference;
    printf("Enter the radius of the circle :\n");
    scanf("%f",&radius);

    area = 3.14 *(radius*radius);
    printf("The area of the circle is : %f\n",area);

    circumference = 2*3.14*radius;
    printf("The circumference of the circle is : %f\n",circumference);

    return 0;
}
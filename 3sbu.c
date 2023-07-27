#include <stdio.h>

// Program taking the marks in 3 subjects and show total and average marks.

int main(){

    float mrks_sci,mrks_mth,mrks_cs;
    int total;
    float average;

    printf("Enter the marks in SCIENCE (out of 80) :\n");
    scanf("%f",&mrks_sci);




    printf("Enter the marks in MATHEMATICS (out of 80) :\n");
    scanf("%f",&mrks_mth);

    printf("Enter the marks in COMPUTER SCIENCE (out of 70) :\n");
    scanf("%f",&mrks_cs);

    total = mrks_mth + mrks_sci + mrks_cs;

    printf("The total marks obtained by you (out of 230) is :%d\n",total);

    average = (mrks_cs + mrks_mth + mrks_sci) / 3;

    printf("Your average marks is : %f\n",average);

    return 0;
}

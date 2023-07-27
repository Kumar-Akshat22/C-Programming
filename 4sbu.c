#include <stdio.h>

// Program to find the simple interest.

int main(){
    
    float prin_amt,roi,time_period;
    float simple_intrst;
    
    printf("Enter the value of PRINCIPAL AMOUNT (in Rs) :\n Rs ");
    scanf("%f",&prin_amt);

    printf("Enter the RATE OF INTEREST (in percentage) :  \n");
    scanf("%f",&roi);

    printf("Enter the value of TIME PERIOD (in years) : \n");
    scanf("%f",&time_period);

    simple_intrst = (prin_amt * roi * time_period) / 100;

    printf("You will receive RS %f for \nPRINCIPAL AMOUNT RS%f \nat RATE OF INTEREST %f \nafter %f years.",simple_intrst,prin_amt,roi,time_period);



    return 0;
}
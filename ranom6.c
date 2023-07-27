#include <stdio.h>

#define MAX1_LIMIT 100000
#define MAX2_LIMIT 500000
#define COST1 (5000 * 30) 
#define COST2 (7000 * 40)
#define COST3 (9000 * 50)

int main(){

    printf("\t\t\tGovt House Building Project\t\t\t\n");

    float income,floor_area,floor_area_1,floor_area_2,floor_area_3,cost;

    printf("Enter your Annual Income:\n");
    scanf("%f",&income);

    if (income < MAX1_LIMIT)
    {
        printf("Your Category is BPL\n");
        printf("The land declared by State Govt for BPL category is 30sqm\n");
        printf("Additional 10sqm floor area is available at a cost of Rs 5000 per sqm\n");

        printf("Enter the floor area (in sqm) you want :\n");
        scanf("%f",&floor_area);
        

        if (floor_area <= 30)
        {
            cost = (5000 * floor_area);
            printf("The total cost will be Rs %f for a floor area of %f sqm\n",cost,floor_area);
        
        }

        else{

            floor_area_1 = (floor_area - 30);

            cost = COST1 + (8000 * floor_area_1);

            printf("The total cost will be Rs %f for a floor area of %f sqm\n",cost,floor_area);
        }
        
    }

    else if(income < MAX2_LIMIT)
    {
        printf("Your Category is not BPL\n");
        printf("The land declared by State Govt for this category is 40sqm\n");
        printf("Additional 10sqm floor area is available at a cost of Rs 10000 per sqm\n");

        printf("Enter the floor area (in sqm) you want :\n");
        scanf("%f",&floor_area);
        

        if (floor_area <= 40)
        {
            cost = (7000 * floor_area);
            printf("The total cost will be Rs %f for a floor area of %f sqm\n",cost,floor_area);
        
        }

        else{
            floor_area_2 = (floor_area - 40);

            cost = COST2 + (10000 * floor_area_2);

            printf("The total cost will be Rs %f for a floor area of %f sqm\n",cost,floor_area);
        }
        
    }

    else{

        printf("The land declared by State Govt for this category is 50sqm\n");
        printf("Additional 10sqm floor area is available at a cost of Rs 11000 per sqm\n");

        printf("Enter the floor area (in sqm) you want :\n");
        scanf("%f",&floor_area);
        

        if (floor_area <= 50)
        {
            cost = (9000 * floor_area);
            printf("The total cost will be Rs %f for a floor area of %f sqm\n",cost,floor_area);
        
        }

        else{
            floor_area_3 = (floor_area - 50);

            cost = COST3 + (11000 * floor_area_3);

            printf("The total cost will be Rs %f for a floor area of %f sqm\n",cost,floor_area);
        }


    }
    

    return 0;
}
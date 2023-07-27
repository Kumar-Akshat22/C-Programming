#include <stdio.h>

#include <string.h>

/*
You manage a Travel Agency and you want your drivers to input their following details: 

    1. Name
    2. Driving License Number
    3. Route
    4. Kms driven

Your program should be able to take n as an input and your drivers will start to input their details one by one.

Your program should print details of the drivers in a beutiful format.

Use the concept of structures. 
*/

struct Employee_manager
{

    char name[40];
    char dr_lic_no[40];
    char route[40];
    float kms;
    
};

int main()
{

    int n ;

    printf("\n\t\t\tHi! Welcome to Super Fast Travel Agency\t\t\t\n");

    printf("\t\t\tToday's Date is %s\t\t\t\n",__DATE__);

    printf("Enter the number of drivers who want to make their entries:\n");
    scanf("%d",&n);

    struct Employee_manager dr[n];
    
    for (int i = 0; i < n; i++)
    {

        printf("1.Enter the total distance travelled (in Kilometers) :\n");

        scanf("%f",&dr[i].kms);
        getchar();

        printf("2.Enetr your name :\n");

        fgets(dr[i].name,sizeof(dr->name),stdin);
        getchar();


        printf("3.Enter your Driving License Number :\n");

        fgets(dr[i].dr_lic_no,sizeof(dr->dr_lic_no),stdin);
        getchar();
        

        printf("4.Enter your Route :\n");

        fgets(dr[i].route,sizeof(dr->route),stdin);
        getchar();

    }

    printf("The details of the Employees are as follows:\n");

    for (int j = 0; j < n; j++)
    {
        printf("The name of the Employee is %s\n",dr[j].name);
        printf("\t\n%s's Driving Licence Number is %s\n\t",dr[j].name,dr[j].dr_lic_no);
        printf("The route is %s\n",dr[j].route);
        printf("\t\nThe total distance travelled by this driver is %f\n\t",dr[j].kms);
    }
    
    return 0;
}
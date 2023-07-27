#include <stdio.h>
int main()
{

    float mark_th , mark_pr , per;
    char name[34];

    printf("Enter Student's Name :\n");
    fgets(name,sizeof(name),stdin);
    
    printf("Enter Student's marks in C Programing theory (out of 100):\n");
    scanf("%f",&mark_th);

    printf("Enter Student's marks in C Programing practical (out of 100):\n");
    scanf("%f",&mark_pr);

    per = ((mark_pr + mark_th)/200) * 100;

    if (per >= 90)
    {
        printf("%s You have passed the examination with flying colors and your grade is A+!",name);
    }
    
    else if (per >= 80)
    {
        printf("%s Your grade is A!",name);
    }
    
    else if (per >= 70)
    {
        printf("%s Your grade is B!",name);
    }
    else if (per >= 50)
    {
        printf("%s Your grade is C!",name);
    }

    else{

        printf("Hey champ, you haven't done well this time in the examination but work hard for the upcoming exams , you will surely do great!");
    }
    


    
    return 0;
}
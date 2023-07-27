#include <stdio.h>

int main()
{
    int mth_marks, sci_marks, prize_money;
    char name[20];

    printf("Enter The Name Of The Student :\n");
    scanf("%s", &name);

    printf("Enter Your Marks in Mathematics (out of 80) in the Latest Examination : \n");
    scanf("%d", &mth_marks);

    printf("Enter Your Marks in Science (out of 80) in the Latest Examination : \n");
    scanf("%d", &sci_marks);

    if (mth_marks > 45 && sci_marks > 45)
    {
        printf("HURRAY!You have passed in both subjects!\n");

        printf("You will be getting RS 1000 as a Gift Card from the School at This Year's ANNUAL FUNCTION.\n");

        printf("This year ANNUAL FUNCTION will be held on 28th DECEMBER 2021.\n");
    }

    else if (mth_marks > 54)
    {
        printf("You have passed in MATHEMATICS.\n");

        printf("You will be getting RS 500 as a Gift Card from the School at This Year's ANNUAL FUNCTION.\n");

        printf("This year ANNUAL FUNCTION will be held on 28th DECEMBER 2021.\n");
    }

    else if (sci_marks > 55)
    {
        printf("You have passed in SCIENCE.\n");

        printf("You will be getting RS 500 as a Gift Card from the School at This Year's ANNUAL FUNCTION.\n");

        printf("This year ANNUAL FUNCTION will be held on 28th DECEMBER 2021.\n");
    }

    else{
        printf("HEY! CHAMP Don't Be Disheartened.\nLife is really long as well as large.\nYou will get a LOT OF Opportunites in life.\nMove ahead and Enjoy.\nTODAY You Might not be eligible for any PRIZE MONEY!,Take it as a learning \nAFTER ALL it all depends on how we take things in life and \nALWAYS REMEMBER Failures teach a Human more than Success could ever do.\nYou will surely be successfull in your LIFE if you work sincerely,what you love doing.");
    }

    return 0;
}
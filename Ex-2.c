#include <stdio.h>

// WRITE A PROGRAM FOR UNITS CONVERSION.

/*

  1. kms to miles
  2. inches to foot
  3. cms to inches
  4. pound to kgs
  5. inches to metres

*/

int main()
{

    // Variable Declaration for accepting user's choice for conversion.
    int var, ch, ch_1, ch_2, ch_3, ch_4, ch_5;

    // Variable declaration for different units.
    int km, inch, cms, pound, mile, foot, kg, metres;

    printf("\t\t\t\t Hi! Welcome to Unit Conversion Program.\n");

    printf("Press 1 Key To Continue :");
    scanf("%d", &var);

    if (var == 1)
    {

        printf("The choices are :\n");

        printf("1 Conversion between kilometer and mile.\n");
        printf("2 Conversion between inch and foot.\n");
        printf("3 Conversion between centimeter and inch.\n");
        printf("4 Conversion between pound and kg.\n");
        printf("5 Conversion between inch and metre.\n");

        printf("Enter your desired choice (from 1 to 5) :\n");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("Welcome To The kilometer <--> mile conversion.\n");

            printf("Enter 1 for kilometre to mile conversion.\n");
            printf("Enter 2 for mile to kilometre conversion.\n");

            scanf("%d", &ch_1);

            if (ch_1 == 1)
            {
                float res1;
                printf("Enter the value in kilometre :\n");
                scanf("%d", &km);

                res1 = (km * 0.621371);
                printf("%d in miles is :%f\n", km, res1);
            }

            else
            {
                float res2;
                printf("Enter the value in miles :\n");
                scanf("%d", &mile);

                res2 = (mile * 1.60934);
                printf("%d in kilometres is :%f", mile, res2);
            }
        }

        else if (ch == 2)
        {
            printf("Welcome To The inch <--> foot conversion.\n");

            printf("Enter 3 for inch to foot conversion.\n");
            printf("Enter 4 for foot to inch conversion.\n");

            scanf("%d", &ch_2);

            if (ch_2 == 3)
            {
                float res3;
                printf("Enter the value in inches :\n");
                scanf("%d", &inch);

                res3 = (inch * 0.0833333);
                printf("%d in foot is :%f\n", inch, res3);
            }

            else
            {
                int res4;
                printf("Enter the value in foot :\n");
                scanf("%d", &foot);

                res4 = (foot * 12);
                printf("%d in inch is :%d\n", foot, res4);
            }
        }

        else if (ch == 3)
        {
            printf("Welcome To The centimeter <--> inch conversion.\n");

            printf("Enter 5 for centimeter to inch conversion.\n");
            printf("Enter 6 for inch to centimeter conversion.\n");

            scanf("%d", &ch_3);

            if (ch_3 == 5)
            {
                float res5;
                printf("Enter the value in centimeter :\n");
                scanf("%d", &cms);

                res5 = (cms * 0.393701);
                printf("%d in inch is :%f\n", cms, res5);
            }

            else
            {
                float res6;
                printf("Enter the value in inch :\n");
                scanf("%d", &inch);

                res6 = (inch * 2.54);
                printf("%d in centimeter is :%f\n", inch, res6);
            }
        }

        else if (ch == 4)
        {
            printf("Welcome To The pound <--> kg conversion.\n");

            printf("Enter 7 for pound to kg conversion.\n");
            printf("Enter 8 for kg to pound conversion.\n");

            scanf("%d", &ch_4);

            if (ch_4 == 7)
            {
                float res7;
                printf("Enter the value in pounds :\n");
                scanf("%d", &pound);

                res7 = (pound * 0.453592);
                printf("%d in kilograms is :%f\n", pound, res7);
            }

            else
            {
                float res8;
                printf("Enter the value in kilograms :\n");
                scanf("%d", &kg);

                res8 = (kg * 2.20462);
                printf("%d in pounds is :%f\n", kg, res8);
            }
        }

        else if (ch == 5)
        {
            printf("Welcome To The inch <--> metre conversion.\n");

            printf("Enter 9 for inch to metre conversion.\n");
            printf("Enter 0 for metre to inch conversion.\n");

            scanf("%d", &ch_5);

            if (ch_5 == 9)
            {
                float res9;
                printf("Enter the value in inch :\n");
                scanf("%d", &inch);

                res9 = (inch * 0.0254);
                printf("%d in meteres is :%f\n", inch, res9);
            }

            else
            {
                float res10;
                printf("Enter the value in metre :\n");
                scanf("%d", &metres);

                res10 = (metres * 39.3701);
                printf("%d in inch is :%f\n", metres, res10);
            }
        }
    }

    return 0;
}
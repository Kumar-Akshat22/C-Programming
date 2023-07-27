#include <stdio.h>
#include <string.h>

// About STRUCTURES in C LANGUAGE.

struct Student
{
    int id;
    float marks;
    char fav_char;
    char name[34];
};

struct Student Akshat, Pradeep, Vedant;

// Akshat , Vedant , Pradeep can be Globally accessed by any FUNCTION.
// They are Global Variables.

void print()
{

    printf("The name of Akshat is: %s\n", Akshat.name);
}

int main()
{

    // STRUCTURES are "USER - DEFINED" DATA TYPE.

    Akshat.id = 1;
    Akshat.marks = 85.5;
    Akshat.fav_char = 'a';

    Pradeep.id = 2;
    Pradeep.marks = 89;
    Pradeep.fav_char = 'p';

    Vedant.id = 3;
    Vedant.marks = 95;
    Vedant.fav_char = 'v';

    printf("\nThe id of Akshat is :%d\n", Akshat.id);
    printf("Akshat scored %f marks\n", Akshat.marks);
    printf("Akshat's favourite character is :%c\n", Akshat.fav_char);

    printf("The id of Pradeep is :%d\n", Pradeep.id);
    printf("Pradeep scored %f marks\n", Pradeep.marks);
    printf("Pradeep's favourite character is :%c\n", Pradeep.fav_char);

    printf("The id of Vedant is :%d\n", Vedant.id);
    printf("Vedant scored %f marks\n", Vedant.marks);
    printf("Vedant's favourite character is :%c\n", Vedant.fav_char);

    strcpy(Akshat.name, "Akshat student of the year");
    
    printf("The name of student with id-1 is : %s\n", Akshat.name);

    print();

    return 0;
}
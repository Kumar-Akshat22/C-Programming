#include <stdio.h>
#include <string.h>

// About Union in C Language.

union Student {

    int id;
    float marks;
    char fav_char;
    char name[34];
};

int main()
{

    /* 
       1. unions are very similar to Structure.
       2. But unions provide a better Memory Management than Structures.
       3. In unions concept of shared memory is used.
    */

   union Student s1;

   s1.id = 1;
   s1.marks = 78.5;
   s1.fav_char = 'a' ;
   strcpy(s1.name , "Akshat");

   printf("The id is :%d\n",s1.id);
   printf("The marks is :%f\n",s1.marks);
   printf("The fav_char is :%c\n",s1.fav_char);
   printf("The name is :%s\n",s1.name);

    return 0;
}
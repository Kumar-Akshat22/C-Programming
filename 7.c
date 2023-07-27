#include <stdio.h>

int main(){
  
    int age;

    printf("Enter your Age :\n");
    scanf("%d",&age);    

    printf("You have entered %d as your age\n",age);
    
    if (age>=18)
    {
        printf("You Can Vote!\n");
    }
    
    else if (age >= 10)
    {
        printf("You are between 10 to 18 years and you can vote for kids!\n");
    }
    
    else{
        printf("You Cannot Vote!\n");
    }

    return 0;
}

// TASK

/* Distribution Of Gifts to students
maths and science exam pass - Rs 45
science - Rs 15
maths - Rs 30 */

// print the type of gift you are giving to the students.

#include <stdio.h>

// About typedef in C Language.

typedef struct Student{

    int id;
    int marks;
    char fav_char;

} std;

int main(){

    typedef unsigned long ul;

    ul l1,l2,l3;

    // struct Student s1 , s2;

    std s1 , s2;
    // Above Both are Valid .

    s1.id = 34;
    s2.id = 35;

    printf("The id of s1 is %d\n",s1.id);

    // int *a , b;
    // In the above declaration "a" is a Pointer but b is integer variable. 

    typedef int* intPointer;
    intPointer a , b;

    // In the above declaration both "a" and "b" are pointers.

    int c = 89;
    
    a = &c;
    b = &c;

    printf("The address of variable c is :\n%p\n",a);

    return 0;
}
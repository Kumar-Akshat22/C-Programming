#include <stdio.h>
#include <stdlib.h>

// About DANGLING POINTER in C Language.

// DANGLING --> It means hanging.

int *funcdang(){

    int a , b ,sum;

    a = 34;
    b = 364;

    sum = (a + b);

    return sum;

}

int main(){

    /*
    
    1.Dangling Pointers can introduce Nasty Bugs in a C Program.
    2.Dangling Pointer bugs frequently become security holes at times.

    We can handle Dangling Pointers efficently and make powerful C Programs.

    */

    //Case --> Deallocation of a memory block

   int *ptr = (int *)malloc(7*sizeof(int));
   ptr[1] = 21;
   ptr[2] = 21;
   ptr[2] = 21;

   free(ptr); //ptr is now a dangling pointer
   
   //Case --> Function returning a Local Variable address.

   int *dangptr = funcdang();

   //Case --> If a variable goes out of scope

   int * dangptr1;

   {
       int a = 10;
       
       dangptr1 = &a;
   }

    //Here variable a goes out of scope which means dangptr1 is pointing to a location which is freed and hence dangptr1 is now a dangling pointer.

    return 0;
}

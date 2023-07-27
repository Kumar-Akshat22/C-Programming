#include <stdio.h>
#include <stdlib.h>

// In the above two #include statements the angular brackets say to look in the standard system directories.

#include "1.c"

// But the above #include statement the quotation marks say to look in the current directory.

#define PI 3.14

#define SQUARE(r) r*r

/* 

1. #define directive is used for Debugging a program.
2. #define directive is also used for creating "macros".

3. Macros operate much like functions.

*/

int main(){

    float r = 21.78;

    printf("The area of the circle is :%f\n",PI * SQUARE(r));

    return 0;
}

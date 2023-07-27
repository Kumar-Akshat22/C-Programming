// Some other C Preprocessors.

// #undef --> undefines a macro.

// _Pragma --> To issue some special commands to the compiler.

#include <stdio.h>

#include <stdlib.h>

int main()
{

    // Some Predefined Macros.

    printf("The name of this file is :%s\n",__FILE__);

    printf("Today's Date is :%s\n",__DATE__);

    printf("It's %s p.m.\n",__TIME__);

    printf("Line No is %d\n",__LINE__);

    printf("ANSI: %d\n",__STDC__);

    
    return 0;
}
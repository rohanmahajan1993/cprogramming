#include <assert.h>
#include <stdio.h>

/*
In macros versus inline, macros replace text during preprocessor while inline is just a compiler directive.
// because macro is text copied good to do __ paramaters and any local variables used in parameters
// dont pass in type of paremeters in macro
// can't really return values from macros because no function call being made
// usually, don't have any value assigned to value of macro funciton because want to make multiline with multiple statements
// however, if oneline can make statement as seen in min
// generally put macro in header files because going to get copied anways
*/
#define MACRO(__num, __str) {\
            printf("%d", __num);\
            printf(" is");\
            printf(" %s number", __str);\
            printf("\n");\
           }
#define MAX(a,b) ((a) > (b) ? a : b)

int testing_functions() {
  MACRO(3, "fa");
  int value = MAX(3,5);
}


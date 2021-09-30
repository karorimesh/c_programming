//#include <libintl.h>
//
////Extern
//// Used in both objects and variables
////extends visibility of c variables and functions
////in functions extern is implicitly implied
////extern allows methods to be called anywhere in the project
////When it comes to variables extern declares but it does not define the variable, i.e allocate a memory space
////Example- this code produces an error
#include <stdio.h>
extern int var;
int main(){
    var = 10;
    printf("var is %d",var);
    return 0;
}



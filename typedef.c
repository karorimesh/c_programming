//
// TypeDef in C
// Provide meaningful to the already existing variable in the c program
// TypeDef have the same behaviour as alias commands
// Can be used with pointers and Structures

#include <stdio.h>
int main(){

    typedef unsigned int Int;
    Int var = 10;
    printf("Value = %d", var);

    return 0;
}


////
////Stores a variable value in a register instead of memory
//// Useful for access variables faster
////Can store a pointer but cannot be pointed to
////Cannot allow to be specified as static
////Cannot be global, only used within a block
////There is no limit of register variables
////
////Example
#include <stdio.h>
int main(){
    register int registerValue = 10;
    int normalValue = 10;
    //Error
    //int* location = &value;
    //Resister with address
    register int* registerAddress= &normalValue;
    printf("Value is %d",registerValue);
    printf("Value is %d",registerAddress);
    return 0;
}

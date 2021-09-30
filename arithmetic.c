////
//// Created by Student1 on 9/29/2021.
////
////
//// Created by Student1 on 9/28/2021.
////
#include<stdio.h>
int main(){

    //Variables
    int firstValue, secondValue, result;
    char operator;

    //Input
    printf("\nEnter The Expression is (e.g 5*9): ");
    scanf(" %d %c %d", &firstValue, &operator, &secondValue);
    //Testing operator input scanf("%c",&operator);

    //Operation
    switch (operator) {

        case '+':result = firstValue + secondValue;
            break;
        case '-':result = firstValue - secondValue;
            break;
        case '*':result = firstValue * secondValue;
            break;
        case '/':result = firstValue / secondValue;
            break;
        case '%':result = firstValue % secondValue;
            break;

        default:
            printf("Wrong expression");

    }

    //Output of operation
    printf("\n%d %c %d = %d", firstValue, operator, secondValue, result);

    //Perform all other operations
    printf("\nOther Operations");

    (operator=='+')?(printf("")): (printf("\n%d + %d = %d",firstValue,secondValue,firstValue+secondValue));
    (operator=='-')?(printf("")): (printf("\n%d - %d = %d",firstValue,secondValue,firstValue-secondValue));
    (operator=='*')?(printf("")): (printf("\n%d * %d = %d",firstValue,secondValue,firstValue*secondValue));
    (operator=='/')?(printf("")): (printf("\n%d / %d = %d",firstValue,secondValue,firstValue/secondValue));
    (operator=='%')?(printf("")):(printf("\n%d mod %d = %d",firstValue,secondValue,firstValue%secondValue));


    return 0;
}



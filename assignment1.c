////
//// Created by Student1 on 9/28/2021.
////
#include<stdio.h>
int main(){
    //Variables
    int firstValue, secondValue, result;
    char operator;
    //Input
    printf("\nEnter The Expression is: ");
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
    //Output of parameters
    printf("\n%d %c %d = %d", firstValue, operator, secondValue, result);
    return 0;
}


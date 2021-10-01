//
// Created by Student1 on 10/1/2021.
//
#include <stdio.h>

//Prototype
void swap(int,int);

int main(){
    int a,b;
    a=10,b=20;
    printf("Values before swap a = %d, b = %d",a,b);
    swap(a,b);
    printf("Values after swap a = %d, b = %d",a,b);

    return 0;
}

void swap(int a, int b){
    int temp;
    printf("Values in function  before swap a = %d, b = %d",a,b);
    a = temp;
    a = b;
    b = temp;
    printf("Values in function after swap a = %d, b = %d",a,b);
}


//
// Created by Student1 on 10/1/2021.
//
#include <stdio.h>

//Prototype
void swap(int*,int*);


int main(){
    int a,b;
    a=10,b=20;
    printf("\nValues before swap a = %d, b = %d",a,b);
    swap(&a,&b);
    printf("\nValues after swap a = %d, b = %d",a,b);

    return 0;
}

void swap(int *a, int*b){

    int temp;

    printf("\nValues in function  before swap a = %d, b = %d",*a,*b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nValues in function after swap a = %d, b = %d",*a,*b);
}


//
// Created by Student1 on 10/5/2021.
//
#include<stdio.h>

//Function for printing 2-dimensional array
void printArray2(int arr[2][5]){
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}

//Function for printing 1-dimensional array
void printArray1(char arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("%c", arr[i]);
    }
}
//Function that returns a pointer to array of type int
//Cannot Return a whole array, only pointers to the arraay
int *getArray(int *arr){

    printf("Enter 5 Integers: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

//Function to alter elements of an array and return the array
int addOne(int arr[]){
    for(int i=0;i<5;i++){
        ++arr[i];
    }
}
//Function for printing 1-dimensional int array
void printArray3(int arr[]) {
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }
}
int main(){
    char arr1[5] = {'A','B','C','D','E'};
    int arr2[2][5] = {{1,4,5,7,6},{3,4,6,7,8}};
    int arr3[5]={1,2,3,4,5};
    int arr4[5];
    int *arr;
    arr =  getArray(arr4);



    printf("Print of characters arr1\n");

    printArray1(arr1);
    printf("\n");
    printf("Print of 2 dimensional arr2\n");
    printArray2(arr2);
    printf("Print of arr3 plus one to every element\n");
    addOne(arr3);
    printArray3(arr3);
    printf("\nElements from the getArray function\n");
    printArray3(arr);
    printf("\n");
//        printArray3(arr4);
    return 0;
}



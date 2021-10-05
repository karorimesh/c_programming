#include <stdio.h>
int *getArray(){
    static int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}
int main(){

    int *myArr;
    myArr=getArray();
    for(int i = 0; i<3; i++){
        printf("\n5%d",myArr[i]);
    }
    return 0;
}
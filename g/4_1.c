#include<stdio.h>  

void addData(unsigned int* data, unsigned int value, int index){

    data[index] = value;
}

int main(){
    unsigned int array[20];
    addData(array, 10, 5);

    for(int i = 0; i < 20; i++){
        printf("%d ",array[i]);
    }
}
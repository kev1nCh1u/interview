#include <stdio.h>
#include <stdlib.h>

int addFuc(int a, int b){
    return a + b;
}

int subFuc(int a, int b){
    return a - b;
}

int mulFuc(int a, int b){
    return a * b;
}

int divFuc(int a, int b){
    return a / b;
}


int main(){
    int (*fucArr[])(int, int) = {addFuc, subFuc, mulFuc, divFuc};
    int size = sizeof(fucArr)/sizeof(fucArr[0]);
    printf("%d %d\n", sizeof(fucArr[0]), size);

    int a = 4, b = 2;

    for(int i = 0; i < size; i++){
        printf("%d\n", fucArr[i](a, b));
    }
}
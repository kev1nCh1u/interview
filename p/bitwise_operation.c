#include <stdio.h>
#include <stdlib.h>

void swap_bitwise(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(){
    int a = 3, b = 4;
    printf("%d %d\n", a, b);
    swap_bitwise(&a, &b);
    printf("%d %d\n", a, b);
}
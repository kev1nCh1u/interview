#include <stdio.h>
#include <stdlib.h>

void swapChar(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void littleEndian(int *a, char *b){
    b = (char *)a;
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
}

void bigEndian(int *a, char *b){
    b = (char *)a;
    swapChar(&b[0], &b[1]);
    printf("%d\n", b[0]);
    printf("%d\n", b[1]);
}

int main(){
    int a = 513;
    char c[2] = {0};
    littleEndian(&a, c);
    bigEndian(&a, c);
}
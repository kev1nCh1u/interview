#include <stdio.h>
#include <stdlib.h>

int roundFuc(float a){
    return a += 0.5;
}

int main(){

    printf("%d\n", roundFuc(10.5));
    printf("%d\n", roundFuc(10.4));
}
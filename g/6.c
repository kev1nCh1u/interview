#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 0;
    int x = 1025;
    while(x){
        count++;
        x=x&(x-1);
    }
    printf("%d", count);
}
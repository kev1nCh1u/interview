#include<stdio.h>

void func(void){
    static int i = 0;
    i++;
    printf("%d", i);
}

int main(){
    
    for(int i = 0;i < 8; i++){
        func();
    }
    
}
/*
給一個int a[20]已排序的陣列，請寫一個function(a, size, b)能依照參數b(b = 0~4)別印出該區間的數字，
且不包含a陣列內的元素
*/

#include <stdio.h>
#include <stdlib.h>

int range = 50;

/* You may call function through function(a, size, b) */
void function(int *a, int size, int b){
    
    for(int i =  range/5*b; i < range/5*(b+1); i++){
        if(*a == i){
            a++;
        }
        else{
            printf("%d ", i);
        }
    }
}

int main(){
    int a[5] = {1, 4, 5, 6, 7};
    int size = 5;
    function(a, size, 4);
}
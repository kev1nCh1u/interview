/*
給一個int a[20]已排序的陣列，請寫一個function(a, size)能印出0~500的數字，
且不包含a陣列內的元素，請用最少的時間和空間複雜度完成。
*/

#include <stdio.h>
#include <stdlib.h>

/* You may call function through function(a, size) */
void function(int *a, int size){
    for(int i = 0; i < 20; i++){
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
    function(a, size);
}
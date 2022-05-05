#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[5] = {5, 8, 4, 9, 1};
    int b[5] = {2, 1, 3, 4, 0};

    for(int i = 0; i < 5-1; i++){
        for(int j = 0; j < 5-i-1; j++){
            if(a[j] > a[j+1]){
                *(a+j) = *(a+j) ^ *(a+j+1);
                *(a+j+1) = *(a+j) ^ *(a+j+1);
                *(a+j) = *(a+j) ^ *(a+j+1);
            }
        }
    }

    int res[5];

    for(int i = 0; i < 5; i++){
        res[i] = a[b[i]];
    }
}
#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr[] = {5, 8, 4, 9, 1};

    int size = sizeof(arr)/sizeof(int);
    printf("size:%d\n", size);

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //====================================== edit
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    
    //========================================

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
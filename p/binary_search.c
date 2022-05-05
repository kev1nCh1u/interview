#include <stdio.h>
#include <stdlib.h>


void printArray(int *array, int size){
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *nums, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(&nums[j], &nums[j+1]);
            }
        }
    }
}

int binarySearch(int *nums, int size, int num){
    int l = 0, r = size - 1;
    while(r >= l){
        int m = (r-l)/2 + l;
        if(nums[m] == num){
            return m;
        }
        else if(nums[m] > num){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
        // printf("%d %d %d\n", l, r, m);
    }
    return -1;
}

int main(){
    int nums[] = {4,3,6,7,8,9};
    int size = sizeof(nums)/sizeof(nums[0]);
    printArray(nums, size);
    bubbleSort(nums, size);
    printArray(nums, size);
    printf("%d\n", binarySearch(nums, size, 5));

}
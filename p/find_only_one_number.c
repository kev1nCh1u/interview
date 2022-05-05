#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//find the only appeared once number in array

int cmp(const void* a, const void* b){
    return *((int*)a) > *((int*)b);
}

int* solve(int* array, int size, int* returnSize){
    if(size <= 1){
        *returnSize = size;
        return array;
    }

    int* ans = malloc(size * sizeof(int));
    int pre = array[0];
    int index = 1;
    bool repeat = false;
    while(index < size){

        if(repeat){
            if(pre != array[index]){
                repeat = false;
                pre = array[index];
                index++;
            }
            else{
                index++;
            }
            continue;
        }

        if(pre != array[index]){
            ans[*returnSize] = pre;
            (*returnSize)++;
            pre = array[index];
            ++index;
        }
        else{
            repeat = true;
        }
    }
    
    if(array[size-2] != array[size-1]){
        ans[*returnSize] = pre;
        (*returnSize)++;
    }

    ans = realloc(ans, (*returnSize) * sizeof(int));
    return ans;
}

int main(){
    int array[] = {0, 0, 0, 1, 1, 1, 2, 2, 4, 5, 6, 6, 7};
    qsort(array, sizeof(array)/sizeof(int), sizeof(int), cmp);

    int returnSize = 0;
    int* ans = solve(&array[0], sizeof(array)/sizeof(int), &returnSize);
    
    printf("%d\n", returnSize);
    for(int i = 0; i < returnSize; ++i){
        printf("%d ", ans[i]);
    }
    printf("\n");
}
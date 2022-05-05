#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//find the only appeared once number in array

// void findOnlyOne(int *nums, int size){
//     for(int i = 0; i < size; i++){
//         int flag = 0;
//         for(int j = 0; j < size; j++){
//             if(nums[i] == nums[j] && i != j){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             printf("%d", nums[i]);
//         }
//     }
// }

void findOnlyOne(int *nums, int size){
    for(int i = 0, j = i+1; i < size; i++){
        while(nums[i] != nums[j] && j <= size){
            printf("%d:%d\n", nums[i], nums[j]);
            j++;
        }
        i = j++;
        // if(nums[i] != nums[i+1]){
        //     printf("%d ", nums[i]);
        // }
    }
}


int main(){
    int array[] = {0, 0, 0, 1, 1, 1, 2, 2, 4, 5, 6, 6, 7};
    int size = sizeof(array)/sizeof(array[0]);
    findOnlyOne(array, size);
}
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *a, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void PutZerosToEnd(int *a, int size){
    int r = size - 1;
    for(int i = 0; i < r; i++){
            while (a[i] == 0)
            {
                if(a[r] != 0){
                    swap(&a[i], &a[r]);
                }
                r--;
            }
            printArray(a, size);
    }
}

int main() {
    // Write C code here
    printf("Hello world\n");
    int a_pz[] = {1,9,8,4,0,0,2,7,0,6,0,9};
    int len_pz = sizeof(a_pz)/sizeof(a_pz[0]);
    printArray(a_pz,len_pz);
    PutZerosToEnd(a_pz,len_pz);
    printArray(a_pz,len_pz);
    return 0;
}
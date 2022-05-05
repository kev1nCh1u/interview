#include <stdio.h>
#include <stdlib.h>



void printArr(int *a, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int findLastOne(int *a, int size){
    for(int i = 0; i < size-1; i++){
        if(a[i] == 1 && a[i+1] == 0)
            return i;
    }
    return -1;
}

int findLastOne_b(int *a, int size){
    int l = 0, r = size-1;

    while (r > l){
        int m = (r-l)/2 + l;
        if(a[m] == 1 && a[m+1] == 0)
            return m;
        else if(a[m] == 1)
            l = m+1;
        else
            r = m-1;
    }
    
    
    return -1;
}

void main(){
    int a[] = {1,1,1,1,0,0,0,0};
    int size = sizeof(a)/sizeof(a[0]);
    printArr(a, size);
    printf("%d", findLastOne_b(a,size));

}
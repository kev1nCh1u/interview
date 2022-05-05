// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void bubble_sort(int array[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
//find k closest number to X
int* find_closest_element(int* arr, int k ,int x, int len){
    for(int i=0;i<len;i++){
        *(arr+i)-=x;
    }
    bubble_sort(arr,len);
    int* result;
    for(int i=0;i<len;i++){
        if(i>k)
            break;
        // printf("%d\n",arr[i]);
        result[i] = (arr[i]+x);
    }
    return result;
}
void arrTest(int* arr,int len){
    int x = sizeof(arr)/sizeof(arr[0]); //返回指標大小
    printf("x: %d\n",sizeof(arr[0]));
    for(int i=0;i<len;i++){
        arr[i]++;
    }
}
int main() {
    // Write C code here
    printf("Hello world\n");
    int arr[] = {1,2,3,4,5};
    int k =4, x =3;
    int len = sizeof(arr)/sizeof(arr[0]);
    int* ans = find_closest_element(arr,4,3,len);
    for(int i=0;i<k;i++){
        printf("%d\t",*(ans+i));                   
    }
    printf("\n");
    int arrT[] = {2,4,6,8,10};
    int l = sizeof(arrT)/sizeof(arrT[0]);
    for(int i=0;i<l;i++){
        printf("%d\t",arrT[i]);
    }
    printf("\n");
    arrTest(arrT,l);
    for(int i=0;i<l;i++){
        printf("%d\t",arrT[i]);
    }
    printf("\n");
    return 0;
}
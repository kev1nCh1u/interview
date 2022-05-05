#include<stdio.h>
int main(){
    char data[8] = {1,2,3,4,5,6,7,8};
    short *a = (short*)&data[0];
    int b = *a;
    printf("%d",b);
}
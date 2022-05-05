#include<stdio.h>
int main(){
    
    int a,b,c,d,i,result;
    for(i=0,a=0;++i<5;a++);
    for(i=5,b=0;--i;b++);
    for(i=0,c=0;i++<5;c++);
    for(i=5,d=0;i--;d++);

    int res = a*b*c*d;

    printf("%d %d %d %d %d", a,b,c,d,res);
    
}
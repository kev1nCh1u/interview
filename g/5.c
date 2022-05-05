#include <stdio.h>
#include <stdlib.h>

typedef union 
{
    int i;
    unsigned char ch[2];
    /* data */
}Stu;

int main(){
    Stu stu;
    stu.i = 0x1420;
    printf("%d / %d / %d\n", sizeof(stu), stu.ch[0],stu.ch[1]);
}

#include <stdio.h>

//Question: unsigned int bit operate

int get(unsigned int *i, int index){
    return ((*i >> index-1) & 1) ? 1 : 0;
}

void set(unsigned int *i, int index){
    *i |= (1 << index-1);
}

void clear(unsigned int *i, int index){
    *i &= ~(1 << index-1);
}

void inverse(unsigned int *i, int index){
    *i ^= 1 << index - 1;
}


int main(){
    unsigned int i = 131072;
    printf("%x\n", i); // 0x20000

    int val = get(&i, 18);
    printf("%d\n", val);  // 1

    set(&i, 18);
    printf("%x\n", i); // 0x20000

    clear(&i, 18);
    printf("%x\n", i); // 0

    inverse(&i, 18);
    printf("%x\n", i); // 0x20000
}
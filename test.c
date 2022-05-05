#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
	float a = 10.4;
    a = (int)(a+0.5);
    printf("%0.3f", a);
    return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  unsigned int a = 0xFFFF0101;
  unsigned char b = (unsigned char)a;
  char *c = (char *) &a;
  printf("a=%x, b=%x, *c=%x", a, b, *c);
	return 0;
}
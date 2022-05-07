#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void alloc_buffer(char **buf, int len)
{
	*buf = (char *) malloc(len * sizeof(char));
}

int main()
{
	char **str = NULL;
	alloc_buffer(*str, 12);
	strcpy(*str, "Hello World");

    printf("qq:%s\n", *str);
	return 0;
}
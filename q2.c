#include <stdio.h>
#include <string.h>

int test(char *a, char *b)
{
    if (strcmp(a, b) == 0)
    {
        printf("0");
        return 0;
    }
    else
    {
        printf("-1");
        return -1;
    }
}

int main()
{
    char a[] = "test";
    char b[] = "test";

    test(a, b);
}
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void QuickSort(int *array, int left, int right)
{
    if (left < right) {
        int i= left-1, j=right+1;
        int mid = info[(left+right)/2].signal_level;

        while (true) {
            while(info[++i].signal_level > mid);
            while(info[--j].signal_level < mid);

            if (i>=j)
                break;

            swap(info, i, j);
        }

        QuickSort(info, left, i-1);
        QuickSort(info, j+1, right);
    }
}
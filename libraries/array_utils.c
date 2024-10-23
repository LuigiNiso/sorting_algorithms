// array_utils.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "array_utils.h"

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void shuffle(int *arr, int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        int r = rand() % (i + 1);
        swap(&arr[i], &arr[r]);
    }
}

bool is_sorted(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return false;
        }
    }
    return true;
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

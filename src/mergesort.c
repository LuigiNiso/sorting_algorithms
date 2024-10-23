#include <stdio.h>
#include <stdlib.h>
#include "../libraries/array_utils.h"

#define SIZE 7

void split_and_merge(int *arr, int length);
void merge(int *leftarr, int *rightarr, int *arr, int leftsize, int rightsize);

int main(void)
{
    int arr[] = {6, 3, 7, 12, 9, 21, 2};

    split_and_merge(arr, SIZE);

    print_arr(arr, SIZE);
}

void split_and_merge(int *arr, int length)
{
    if (length <= 1)
        return;

    int middle = length / 2;
    int *leftarr = (int *)malloc(middle * sizeof(int));
    int *rightarr = (int *)malloc((length - middle) * sizeof(int));

    for (int i = 0; i < middle; i++)
        leftarr[i] = arr[i];

    for (int i = middle; i < length; i++)
        rightarr[i - middle] = arr[i];

    split_and_merge(leftarr, middle);
    split_and_merge(rightarr, length - middle);

    merge(leftarr, rightarr, arr, middle, length - middle);

    free(leftarr);
    free(rightarr);
}

void merge(int *leftarr, int *rightarr, int *arr, int leftsize, int rightsize)
{
    int i = 0, l = 0, r = 0;

    while (l < leftsize && r < rightsize)
    {
        if (leftarr[l] < rightarr[r])
            arr[i++] = leftarr[l++];
        else
            arr[i++] = rightarr[r++];
    }

    while (l < leftsize)
        arr[i++] = leftarr[l++];

    while (r < rightsize)
        arr[i++] = rightarr[r++];
}

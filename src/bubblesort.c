#include <stdio.h>
#include "../libraries/array_utils.h"

#define SIZE 7

int main(void)
{
    int arr[] = {6, 3, 7, 12, 9, 21, 2};
    int newsize = SIZE;

    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < newsize - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        newsize = newsize - 1;
    }
    print_arr(arr, SIZE);
}

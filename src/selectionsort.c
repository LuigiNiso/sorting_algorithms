#include <stdio.h>
#include "../libraries/array_utils.h"

#define SIZE 7

int main(void)
{
    int arr[] = {6, 3, 7, 12, 9, 21, 2};

    for (size_t j = 0; j < SIZE - 1; j++)
    {
        int *min = &arr[j];
        for (size_t i = j; i < SIZE; i++)
        {
            if (arr[i] < *min)
            {
                min = &arr[i];
            }
        }

        swap(&arr[j], min);
    }

    print_arr(arr, SIZE);
}
#include <stdlib.h>
#include "../libraries/array_utils.c"

#define SIZE 7

void insertion_sort(int *arr, int size);

int main(void)
{
    int arr[] = {6, 3, 7, 12, 9, 21, 2};

    insertion_sort(arr, SIZE);
    print_arr(arr, SIZE);
}

void insertion_sort(int *arr, int size)
{
    for (size_t i = 1; i < size; i++)
    {
        int tmp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = tmp;
    }
}

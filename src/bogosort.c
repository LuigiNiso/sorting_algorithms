#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "../libraries/array_utils.h"

#define SIZE 7
#define MAX_TRIES 1000000

int main(void)
{
    int arr[] = {6, 3, 7, 12, 9, 21, 2};

    bool ended = false;
    srand(time(NULL));
    for (int i = 0; (i < MAX_TRIES && !ended); i++)
    {
        if (!is_sorted(arr, SIZE))
        {
            shuffle(arr, SIZE);
        }
        else
        {
            ended = true;
        }
    }

    print_arr(arr, SIZE);
}
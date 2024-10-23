#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 7
#define MAX_TRIES 1000000

void swap(int *x, int *y);
void shuffle(int *arr, int size);
bool is_sorted(int *arr, int size);
void print_arr(int *arr, int size);

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
            printf("\n%d\n", i);
            ended = true;
        }
    }

    print_arr(arr, SIZE);
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

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
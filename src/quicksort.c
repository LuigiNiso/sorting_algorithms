#include <stdio.h>
#include <stdlib.h>
#include "../libraries/array_utils.h"

#define SIZE 9

void quick_sort(int *arr, int start, int end);
int partition(int  *arr, int start, int end);

int main(void){
	int arr[] = {5, 6, 3, 1, 4, 9, 7, 8, 2};
	
	quick_sort(arr, 0, SIZE);
	
	print_arr(arr, SIZE);
}

void quick_sort(int *arr, int start, int end){
	if(end <= start) return;

	int pivot = partition(arr, start, end);
	quick_sort(arr, start, pivot - 1);
	quick_sort(arr, pivot + 1, end);
}

int partition(int *arr, int start, int end){
	int pivot = arr[end];
	int i = start - 1;

	for(int j = start; j <= end - 1; j++){
		if(arr[j] < pivot){
			i = i + 1;
			swap(&arr[i], &arr[j]);
		}
	}
	i = i + 1;
	swap(&arr[i], &arr[end]);

	return i;
}

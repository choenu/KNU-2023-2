#include<stdio.h>
#include<stdlib.h>

void swap(int* pa, int* pb) {
	int a = *pa;
	*pa = *pb;
	*pb = a;
}

void sort(int* arr, int len){
	for (int i = 0; i < 5; i++) {
		int min = 999999;
		int min_idx = -1;
		for (int j = i; j < 5; j++) {
			int val = arr[j];
			if (val < min) {
				min = val;
				min_idx = j;
			}
		}
		swap(&arr[i], &arr[min_idx]);
	}
}

int main(void) {
	int arr[5] = { 5,4,1,2,3 };
	for (int i = 0; i < 5; i++) printf_s("%d", arr[i]);
	printf_s("\n");

	sort(arr, 5);

	for (int i = 0; i < 5; i++) printf_s("%d", arr[i]);
	printf_s("\n");
}
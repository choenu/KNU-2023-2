#include<stdio.h>

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {

	int a = 1, b = 5;
	printf_s("�ٲٱ� �� a: %d, b: %d\n", a, b);
	swap(&a, &b);
	printf_s("�ٲ� �� a: %d, b: %d\n", a, b);

	return 0;
}
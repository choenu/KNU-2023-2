#include <stdio.h>
int main(void) {
	int a;
	int* ptr1 = &a;

	char b = 'b';
	int* ptr2 = &b;

	printf_s("%d\n", ptr1);
	printf_s("%d\n", sizeof(ptr1));
	printf_s("%d\n", ptr2);
	printf_s("%d\n", sizeof(ptr2));
}
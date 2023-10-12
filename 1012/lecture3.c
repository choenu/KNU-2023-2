#include<stdio.h>

int main(void) {

	int num = 100;
	int* ptr = &num;

	printf_s("%d\n", ptr);
	printf_s("%d\n", *ptr);

	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf_s("num1: %d\n", num1);
	printf_s("num2: %d\n", num2);
}
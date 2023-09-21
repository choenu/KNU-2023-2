#include<stdio.h>

double sum(double a, double b) {
	printf_s("%lf", a+b);
}

double sub(double a, double b) {
	printf_s("%lf", a - b);
}
double mul(double a, double b) {
	printf_s("%lf", a * b);
}
double div(double a, double b) {
	printf_s("%lf", a / b);
}

void calculator(int selector) {

	double num1, num2;

	printf_s("1.숫자 1을 입력하시오. :");
	scanf_s("%lf", &num1);

	printf_s("2.숫자 2을 입력하시오. :");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
	else printf_s("오류 발생 다른 번호를 선택해주세요");
	return 0;
}
int main(void) {

	int sel;

	printf_s("1.더하기 2.빼기 3.곱하기 4.나누기 :");
	scanf_s("%d", &sel);

	calculator(sel);

	return 0;
}
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

	printf_s("1.���� 1�� �Է��Ͻÿ�. :");
	scanf_s("%lf", &num1);

	printf_s("2.���� 2�� �Է��Ͻÿ�. :");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
	else printf_s("���� �߻� �ٸ� ��ȣ�� �������ּ���");
	return 0;
}
int main(void) {

	int sel;

	printf_s("1.���ϱ� 2.���� 3.���ϱ� 4.������ :");
	scanf_s("%d", &sel);

	calculator(sel);

	return 0;
}
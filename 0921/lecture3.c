#include<stdio.h>

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; ++i)
    {
        result = result * i;
    }
    return result;
}

int main(void) {

    int num = 0;
    int result = 0;

    printf_s("����� ���丮�� ���� �Է��Ͻÿ�. : ");
    scanf_s("%d", &num);

    result = factorial(num);

    printf_s("%d! = %d", num, result);

    return 0;
}
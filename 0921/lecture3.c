#include<stdio.h>

int factorial(int num, int result)
{
    result = num * result;
    num = num--;
    if (num == 0) {
        return result;
    }
    else {
        factorial(num, result);
    }
}

int main(void) {

    int num = 0;
    int result = 1;

    printf_s("����� ���丮�� ���� �Է��Ͻÿ�. : ");
    scanf_s("%d", &num);

    result = factorial(num,result);

    printf_s("%d! = %d", num, result);

    return 0;
}
#include <stdio.h>

int main(void)
{
	int count, hap = 0;

	for (count = 1; count <= 10; count+=2)
	{
		hap += count; // hap = hap + count
		printf("%d���� Ȧ�� ������ ��� : hap = %d\n", count, hap);
	}
	printf("1 + 3 + 5 + 7 + 9 = %d\n", hap);
	return 0;
}
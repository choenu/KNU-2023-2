#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	if ((n % 2) != 0)
		printf("%d��(��) Ȧ��.", n);
	else
		printf("%d��(��) ¦��.", n);
}
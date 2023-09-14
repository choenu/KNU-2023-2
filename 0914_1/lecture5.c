#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	if ((n % 2) != 0)
		printf("%d은(는) 짝수.", n);
	else
		printf("%d은(는) 홀수.", n);
}

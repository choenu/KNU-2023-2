#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);

	if ((n % 2) != 0)
		printf("%dÀº(´Â) È¦¼ö.", n);
	else
		printf("%dÀº(´Â) Â¦¼ö.", n);
}
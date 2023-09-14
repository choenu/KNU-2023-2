#include <stdio.h>

int main(void)
{
	int a = 2, b = 1;
	while (a <= 9)
	{
		if (a == 5) {
			a++;
			continue;
		}
		b = 1;
		while (b <= 9)
		{
			printf("%d * %d = %d\n", a, b, a * b);
			b++;
		}
		a++;
	}
	return 0;
}

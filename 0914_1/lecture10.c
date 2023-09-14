#include <stdio.h>

int main(void)
{
	int a, b;
	a = 1;

	while (a <= 5) {
		b = 1;
		while (b <= 5) {
			if (a == b) {
				if (a % 2 != 0)
					printf("| O |");
				else
					printf("| X |");
			}
			else
				printf("   ");
			b++;
		}
		printf(" \n");
		printf("---------------------- \n");
		a++;
	}
	return 0;
}

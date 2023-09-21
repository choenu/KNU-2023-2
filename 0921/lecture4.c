#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void) {

	double x = 0;
	double y = 0;
	double z = 0;

	int count = 0, circle = 0;

	srand(time(NULL));

	while (count < 10000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if ((x * x + y * y) <= 1.0) {
			circle++;
		}
		count++;
		double progress = (double)count / 10000 * 100.0;
		printf("진행률 : %.2f%% ", progress);
		double pi = 4.0 * ((double)circle / 10000);
		printf("원주율 : %f\n", pi);
	}
	double pi = 4.0 * ((double)circle / 10000);

	printf("원주율 : %f\n", pi);

	return 0;

}
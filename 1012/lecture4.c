#include<stdio.h>

int main(void) {

	int score[5] = { 87,92,89,98,78 };

	//int* p_score = score;
	int* p_score = &score;

	for (int i = 0; i < 3; i++) {
		printf_s("%d\n", *p_score);
		p_score++;
	}
	return 0;
}
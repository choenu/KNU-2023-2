#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf_s("�л� �� �Է�: ");
    scanf_s("%d", &num);

    int* scores = (int*)malloc(num * sizeof(int));

    int total_score = 0;
    for (int i = 0; i < num; i++) {
        printf_s("�л� #%d-%d ���� �Է�: ", num, i + 1);
        scanf_s("%d", &scores[i]); //scores+i
        total_score += scores[i];
    }

    printf_s("����: %d\n\n", total_score);

    for (int i = 0; i < num; i++) {
        printf("�л� #%d-%d ���� ���: %d\n", num, i + 1, scores[i]);
    }
    float average_score = (float)total_score / num;
    printf("��� ����: %.2f\n", average_score);

    free(scores);

    return 0;

   
}
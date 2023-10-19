#include <stdio.h>
#include <stdlib.h>

struct Student {
    int sno;
    char name[10];
    int score;
};

int main() {
    int num;
    printf("�л� �� �Է�: ");
    scanf_s("%d", &num);

    struct Student* std = (struct Student*)malloc(num * sizeof(struct Student));

    int total_score = 0;
    for (int i = 0; i < num; i++) {
        printf("�л� #%d-%d ���� �Է�\n", num, i + 1);
        printf("�й�: ");
        scanf_s("%d", &std[i].sno);
        printf("�̸�: ");
        scanf_s("%s", std[i].name,10);
        printf("����: ");
        scanf_s("%d", &std[i].score);

        total_score += std[i].score;
    }

    printf("����: %d\n", total_score);

    for (int i = 0; i < num; i++) {
        printf("�л� #%d-%d ���� ���\n", num, i + 1);
        printf("�й�: %d\n", std[i].sno);
        printf("�̸�: %s\n", std[i].name);
        printf("����: %d\n", std[i].score);
    }

    float average_score = (float)total_score / num;
    printf("��� ����: %.2f\n", average_score);

    free(std);

    return 0;
}
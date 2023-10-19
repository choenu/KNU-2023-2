#include <stdio.h>
#include <stdlib.h>

struct Student {
    int sno;
    char name[10];
    int score;
};

int main() {
    int num;
    printf("학생 수 입력: ");
    scanf_s("%d", &num);

    struct Student* std = (struct Student*)malloc(num * sizeof(struct Student));

    int total_score = 0;
    for (int i = 0; i < num; i++) {
        printf("학생 #%d-%d 정보 입력\n", num, i + 1);
        printf("학번: ");
        scanf_s("%d", &std[i].sno);
        printf("이름: ");
        scanf_s("%s", std[i].name,10);
        printf("성적: ");
        scanf_s("%d", &std[i].score);

        total_score += std[i].score;
    }

    printf("총점: %d\n", total_score);

    for (int i = 0; i < num; i++) {
        printf("학생 #%d-%d 정보 출력\n", num, i + 1);
        printf("학번: %d\n", std[i].sno);
        printf("이름: %s\n", std[i].name);
        printf("성적: %d\n", std[i].score);
    }

    float average_score = (float)total_score / num;
    printf("평균 점수: %.2f\n", average_score);

    free(std);

    return 0;
}
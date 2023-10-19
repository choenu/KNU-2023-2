#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf_s("학생 수 입력: ");
    scanf_s("%d", &num);

    int* scores = (int*)malloc(num * sizeof(int));

    int total_score = 0;
    for (int i = 0; i < num; i++) {
        printf_s("학생 #%d-%d 성적 입력: ", num, i + 1);
        scanf_s("%d", &scores[i]); //scores+i
        total_score += scores[i];
    }

    printf_s("총점: %d\n\n", total_score);

    for (int i = 0; i < num; i++) {
        printf("학생 #%d-%d 성적 출력: %d\n", num, i + 1, scores[i]);
    }
    float average_score = (float)total_score / num;
    printf("평균 점수: %.2f\n", average_score);

    free(scores);

    return 0;

   
}
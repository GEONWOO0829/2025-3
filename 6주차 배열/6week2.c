#include <stdio.h>
#define ROWS 3
#define COLS 5

// 최종 성적을 출력하는 함수
void print_final_scores(int scores[][COLS], int rows, int cols)
{
    int i;
    for (i = 0; i < rows; i++) {
        double final_scores = scores[i][0] * 0.3 +
                              scores[i][1] * 0.4 +
                              scores[i][2] * 0.2 +
                              scores[i][3] * 0.1 -
                              scores[i][4];
        printf("학생 #%d의 최종성적 = %10.2f\n", i + 1, final_scores);
    }
}

int main(void)
{
    int a[ROWS][COLS] = {
        { 87, 98, 80, 76, 3 },
        { 99, 89, 90, 90, 0 },
        { 65, 68, 50, 49, 0 }
    };

    print_final_scores(a, ROWS, COLS);

    return 0;
}
#include <stdio.h> //성적을 계산하는 코드
#define ROWS 3 //가로
#define COLS 5 //세로

int main(void)
{
    int a[ROWS][COLS] = {
        { 87, 98, 80, 76, 3 },
        { 99, 89, 90, 90, 0 },
        { 65, 68, 50, 49, 0 }
    };
    
    int i;
    for (i = 0; i < ROWS; i++) { //1번학생부터
        double final_score = a[i][0] * 0.3 + a[i][1] * 0.4 +
                             a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
        printf("학생 #%d의 최종성적 = %10.2f\n", i + 1, final_score);
    }

    return 0;
}
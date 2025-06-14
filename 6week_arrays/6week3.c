#include <stdio.h>

// 2x2 행렬을 출력하는 함수
void print_mat2x2(int mat[][2])
{
    int i, j;
    for(i = 0; i < 2; i++) { //00 01 10 11
        for(j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int mat[2][2] = {
        {1, 2},
        {3, 4}
    };

    print_mat2x2(mat);  // 함수 호출

    return 0;
}
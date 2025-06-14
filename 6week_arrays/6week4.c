#include <stdio.h>

#define ROWS_2x2 2
#define COLS_2x2 2

// 2x2 행렬 출력 함수
void print_mat2x2(int mat[][COLS_2x2]) {
    int i, j;
    for(i = 0; i < ROWS_2x2; i++) {
        for(j = 0; j < COLS_2x2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// 2x2 행렬 덧셈 함수
void sum_mat2x2(int mat1[][COLS_2x2], int mat2[][COLS_2x2], int mat_result[][COLS_2x2], int rows, int cols)
{
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            mat_result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main(void)
{
    int mat1[ROWS_2x2][COLS_2x2] = {
        {1, 2},
        {3, 4}
    };

    int mat2[ROWS_2x2][COLS_2x2] = {
        {5, 6},
        {7, 8}
    };

    int mat_result[ROWS_2x2][COLS_2x2];

    // 두 행렬을 더함
    sum_mat2x2(mat1, mat2, mat_result, ROWS_2x2, COLS_2x2);

    // 결과 출력
    printf("행렬 덧셈 결과:\n");
    print_mat2x2(mat_result);

    return 0;
}
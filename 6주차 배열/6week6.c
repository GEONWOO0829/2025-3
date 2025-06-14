#include <stdio.h> //2차원->1차원 나누기

#define SIZE 2
#define RESULT_SIZE 4

// 2x2 행렬 나눗셈 결과를 1차원 배열에 저장
void div_mat2x2(int mat1[][SIZE], int mat2[][SIZE], double result[]) {
    result[0] = (double)mat1[0][0] / mat2[0][0];
    result[1] = (double)mat1[0][1] / mat2[0][1];
    result[2] = (double)mat1[1][0] / mat2[1][0];
    result[3] = (double)mat1[1][1] / mat2[1][1];
}

// 결과 출력
void print_result1D(double result[]) {
    int i;
    for(i = 0; i < RESULT_SIZE; i++) {
        printf("%.2f ", result[i]);
    }
    printf("\n");
}

int main(void) {
    int mat1[SIZE][SIZE] = {
        {10, 20},
        {30, 40}
    };

    int mat2[SIZE][SIZE] = {
        {2, 4},
        {5, 10}
    };

    double result[RESULT_SIZE];

    div_mat2x2(mat1, mat2, result);

    printf("행렬 나눗셈 결과 (1차원 배열):\n");
    print_result1D(result);

    return 0;
}
#include <stdio.h> //22와 22를 곱셈 ->1차원배열 코드

#define SIZE 2
#define RESULT_SIZE 4  // 2x2 행렬 결과를 1차원으로 저장

// 2x2 행렬 곱셈 결과를 1차원 배열에 저장
void multi_mat2x2(int mat1[][SIZE], int mat2[][SIZE], int result[]) {
    result[0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    result[1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    result[2] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    result[3] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];
}

// 결과 출력 함수
void print_result1D(int result[]) {
    int i;
    for(i = 0; i < RESULT_SIZE; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main(void) {
    int mat1[SIZE][SIZE] = {
        {1, 2},
        {3, 4}
    };

    int mat2[SIZE][SIZE] = {
        {5, 6},
        {7, 8}
    };

    int result[RESULT_SIZE];

    multi_mat2x2(mat1, mat2, result);

    printf("행렬 곱 결과 (1차원 배열):\n");
    print_result1D(result);

    return 0;
}
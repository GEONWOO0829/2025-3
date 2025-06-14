#include <stdio.h>

// 공약수 구하는 함수
void calc_common_divisors(int buf1[], int buf2[], int common[]) {
    int i = 0, j, idx = 0;
    while (buf1[i] != -1) {
        j = 0;
        while (buf2[j] != -1) {
            if (buf1[i] == buf2[j]) {
                common[idx++] = buf1[i];
                break;
            }
            j++;
        }
        i++;
    }
    common[idx] = -1;
}

int main(void) {
    int buf1[] = {1, 2, 5, 10, 25, 50, -1};      // 50의 약수
    int buf2[] = {1, 2, 4, 5, 10, 20, 40, 80, -1}; // 80의 약수
    int common[20];

    calc_common_divisors(buf1, buf2, common);

    // 공약수 출력
    int i = 0;
    printf("공약수: ");
    while (common[i] != -1) {
        printf("%d ", common[i]);
        i++;
    }
    printf("\n");

    return 0;
}
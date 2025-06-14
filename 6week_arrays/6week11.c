#include <stdio.h>

#define LENGTH 20

// 진약수(1과 자기자신 제외한 약수) 계산
void calc_proper_divisors(int number, int array[], int length) {
    int i, idx = 0;

    for(i = 2; i < number && idx < length - 1; i++) {
        if(number % i == 0) {
            array[idx++] = i;
        }
    }

    if(idx == 0) {
        array[0] = -1; // 약수가 없으면 첫 칸에 -1
    } else {
        array[idx] = -1; // 약수가 있으면 끝에 -1 flag
    }
}

// 배열 출력 (flag 처리)
void print_array(int array[]) {
    int i = 0;
    if(array[0] == -1) {
        printf("진약수가 없습니다.\n");
        return;
    }

    while(array[i] != -1) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}

int main(void) {
    int num = 13; // 소수일 경우 확인용
    int proper_divisors[LENGTH];

    calc_proper_divisors(num, proper_divisors, LENGTH);
    print_array(proper_divisors);

    return 0;
}
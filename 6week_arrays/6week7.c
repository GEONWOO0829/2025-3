#include <stdio.h>  
#include <stdlib.h>
#include <time.h> 

#define LOTTO_LENGTH 6

// 로또 번호 출력 함수
void print_array(int arr[], int length) {
    int i;
    for(i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 로또 번호 생성 함수
void generate_lotto(int lotto_numbers[], int length) {
    int i;
    srand(time(NULL)); // 매 실행마다 다른 랜덤값 생성

    for(i = 0; i < length; i++) {
        lotto_numbers[i] = rand() % 45 + 1; // 1~45 사이 난수
    }
}

int main(void) {
    int lotto_numbers[LOTTO_LENGTH];

    generate_lotto(lotto_numbers, LOTTO_LENGTH);  // 로또 번호 생성
    print_array(lotto_numbers, LOTTO_LENGTH);     // 출력

    return 0;
}
#include <stdio.h> //어떤수의 약수를 배열의 저장

#define LENGTH 20

// 약수 출력 함수
void print_array(int arr[], int length) {
    int i;
    for(i = 0; i < length; i++) {
        if(arr[i] != 0) // 0은 약수 아님 (미사용 공간)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

// 약수를 배열에 저장하는 함수
void calc_divisor(int number, int array[], int length) {
    int i, idx = 0;
    for(i = 1; i <= number; i++) {
        if(number % i == 0 && idx < length) {
            array[idx++] = i;
        }
    }

    // 남은 배열 공간을 0으로 채움
    for(; idx < length; idx++) {
        array[idx] = 0;
    }
}

int main(void) {
    int num = 50;
    int divisors[LENGTH];

    calc_divisor(num, divisors, LENGTH);
    printf("약수: ");
    print_array(divisors, LENGTH);

    return 0;
}
#include <stdio.h> //최대 공약수, 공배수

#define MAX 100  // 배열 최대 크기

// 공약수를 배열에 저장
int find_common_divisors(int a, int b, int divisors[]) {
    int i, count = 0;
    for(i = 1; i <= (a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0) {
            divisors[count++] = i;
        }
    }
    return count; // 공약수 개수 반환
}

// 공배수를 배열에 저장 (a*b까지)
int find_common_multiples(int a, int b, int multiples[]) {
    int i, count = 0;
    for(i = 1; i <= a * b; i++) {
        if(i % a == 0 && i % b == 0) {
            multiples[count++] = i;
            break; // 최소공배수만 구할 거면 첫 번째에서 종료
        }
    }
    return count;
}

int main(void) {
    int a = 12;
    int b = 18;
    int divisors[MAX];
    int multiples[MAX];
    int count, i;

    // 최대공약수 구하기
    count = find_common_divisors(a, b, divisors);
    printf("공약수: ");
    for(i = 0; i < count; i++) {
        printf("%d ", divisors[i]);
    }
    printf("\n최대공약수: %d\n", divisors[count - 1]);  // 마지막 값이 최대공약수

    // 최소공배수 구하기
    count = find_common_multiples(a, b, multiples);
    printf("최소공배수: %d\n", multiples[0]);  // 첫 번째 값이 최소공배수

    return 0;
}
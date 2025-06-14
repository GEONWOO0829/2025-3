#include <stdio.h>

// 최대공약수 함수 정의
int gcd(int a, int b) {
    int i;
    int max = 1; // 기본값을 1로 초기화

    // 더 작은 수까지 반복
    for(i = 1; i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            max = i; // 공약수 발견되면 갱신
        }
    }

    return max;
}

int main(void) {
    int a = 12;
    int b = 27;
    int result;

    result = gcd(a, b); // 함수 호출
    printf("최대공약수: %d\n", result);

    return 0;
}

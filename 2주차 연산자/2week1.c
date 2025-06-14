#include <stdio.h>

int main(void){ //구의 겉넓이와 부피계산산
    int r=4;
    float s=4*3.14*r*r;
    float v=(4.0/3.0)*3.14*r*r*r; //나눗셈은 실수로, 정수입력 시 몫이 출력력

    printf("S=%f\nV=%f", s, v);
    return 0;
}
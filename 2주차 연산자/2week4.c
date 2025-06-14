#include <stdio.h> //실수를 반올림하여 정수로 변환
int main(void){
    float a=10.5;
    int b;

    b=(int)(a+0.5);
    printf("%d", b);

    return 0;
}
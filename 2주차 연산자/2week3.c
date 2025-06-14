#include <stdio.h> //10진수를 2진수로 바꾸는 코드(비트연산자)
int main(void){
    int x=10;

    int bit0=(x&8)>>3; //2의-3승
    int bit1=(x&4)>>2; //2의-2승
    int bit2=(x&2)>>1;
    int bit3=(x&1)>>0;

    printf("%d%d%d%d\n", bit0, bit1, bit2, bit3);

    return 0;
}
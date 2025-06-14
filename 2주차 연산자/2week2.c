#include <stdio.h> //10진수를 2진수로 바꾸는 코드(10진수 31까지)
int main(void){
    
    int x=20;
    
    int bit00=x/16;
    int bit0=(x%16)/8;
    int bit1=(x%8)/4;
    int bit2=(x%4)/2;
    int bit3=(x%2)/1;

    printf("%d%d%d%d%d\n",bit00, bit0, bit1, bit2, bit3);

    int Bit0=x/16; // 10진수를 16진수로 바꾸는 코드(10진수 16부터)
    int Bit1=(x%16)/1;
    printf("%d%d", Bit0, Bit1);

    return 0;
}

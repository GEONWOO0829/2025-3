#include <stdio.h>
int main(void){ // 10진수를 2진수로 변환하였을때 비트 수
    int a=10;
    int i;
    int c=0; //count
    
    for(i=a; i>0; i=i/2){ //무한루프 주의 i>=0 이건 무한루프임임
        c++;
    }
    printf("%d", c);

    return 0;
}
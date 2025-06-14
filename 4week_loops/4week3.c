#include <stdio.h> //두 수의 최소공배수
int main(void){
    int a=12;
    int b=27;
    int i;

    for(i=1; i<=a*b; i++){ //a*b까지 존재할 수 있음
        if(i%a==0 && i%b==0){ //a와b가 공약수가 되는 값(a와b의 최소공배수)
            printf("%d", i);
            break;
        }
    }
    return 0;
}
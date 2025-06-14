#include <stdio.h> //두 수의 공약수
int main(void){
    int a=12;
    int b=27;
    int i;
    int max; //최대 공약수

    for(i=1; i<=b; i++){ //작은 수까지 반복, 둘다 나누어짐->공약수 출력
        if(a%i==0 && b%i==0){
            max=i; //max가 계속 갱신되고 마지막의 출력된 값이 최대공약수
        }
    }
    
    printf("%d", max);
    return 0;
}
#include <stdio.h> //두 값의 사이 구간을 출력
int main(void){
    
    char ch1='a';
    char ch2='f';
    int i;

    for(i=ch1+1; i<ch2; i++){ //알파벳 문자형도 숫자처럼 순서가 있음(아스키코드)
        printf("%c ", i);
    }
    
    printf("\n"); //문단 띄우기  

    int num1=4;  //구간에 대해 소수만 출력하기기
    int num2=17;
    int c; //소수를 판별하기 위해 나눌 수
    int d; //소수 판별결과

    for(i=num1+1; i<num2; i++){ //사이 값 계산         
        for(c=2; c<i; c++){ 
            if(i%c==0){     //나누어 떨어지면 소수X  
                break;     //소수아니면 break (가장 가까운 '루프'를 종료시킴)
            }
        }
        if(c==i){
                printf("%d ", i);
            }
        
    }
    
    return 0;
}
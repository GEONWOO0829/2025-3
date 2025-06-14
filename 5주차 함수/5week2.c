#include <stdio.h>  //10진수 자리수 출력

int calc_digit(int x){ // 어떤 수의 자릿 수 출력
    int i;
    int b;
    int a=1;
    
    for(i=0; i<10; i++){ //최대 10자릿수만 출력
        b=a*10;
        if(a<=x && x<b){ //10의 i승보다 크고 10의i+1승보다 작을때
            return (i+1); //자릿수 리턴(i+1)
            break;      //리턴 후 break(안써도 됨됨)
        }
        else{
            a=a*10;     //거짓일때 10의 계수 올림
        }
    } 
}

void print_digit_number(int x){ //10진수 자릿수
    int i;
    int digit=calc_digit(x)-1; //x의 자릿수-1
    int q=1;
    int number;

    for(i=0; i<digit; i++){ //x에 대해 나눌수(x의 자릿수에 맞춤) ex) 1000
        q=10*q;
    }

    for(i=0; i<digit; i++){
        number=x/q; //3482 나누기 1000의 몫 3이 number에 저장
        printf("%d ", number); //자릿수 출력
        x=x%q;                 //나머지 저장
        q=q/10;                //가중치 낮춤
    }
    printf("%d", x);           //1의 자릿수 출력(가중치 나눈 나머지)
}

int main(void){
    int x=3482;
    print_digit_number(x); //void변환형으로 함수에서 프린트동작함
    return 0;
}
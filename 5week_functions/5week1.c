#include <stdio.h> //어떤수의 자릿수 구하는 함수

int num(int x){
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

int main(void){

    int x=3482;
    int result;           //반환받을 변수 지정

    result=num(x);        //함수 반환 후 변수에 저장
    printf("%d", result); //자릿수 출력

    return 0;
}
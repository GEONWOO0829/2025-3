#include <stdio.h> // 어떤 수의 자릿수 구하는 방법 2

int main(void){
    
    int x=3482;
    int i;
    int a,b;
    a=1;
    for(i=0; i<10; i++){
        b=a*10;
        if(a<=x && x<b){ //1보다 크거나 같고 10보다 작다->2자릿수
            printf("%d",i+1);// 2자릿수
            break;
        }
        else{
            a=a*10; //아니라면 10제곱 -> 100보다 크거나 같고 1000보다 작다
        }
    }
    return 0;
}
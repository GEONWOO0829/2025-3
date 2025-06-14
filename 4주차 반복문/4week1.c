#include <stdio.h> //어떤 수가 소수인지 판별
int main(void){
    
    int a=7;
    int i;

    for(i=2; i<a; i++){
        if(a%i==0){ //나누어떨어짐=소수 아님님
            printf("False");
            break;
        }
        else if(i==a-1){ //a-1까지 돌렸을때 나눠지지 않음=소수임임
            printf("True");
        }
    }
    return 0;
}
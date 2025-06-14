#include <stdio.h> //1부터 n까지 짝수만 덧셈
int main(void){
    int num1=10;
    int i;
    int sum=0;

    for(i=1; i<=num1; i++){
        if(i%2==0){ 
            sum+=i; //짝수라면   
        }
    }
    printf("%d", sum);

    printf("\n"); //문단 띄우기

    int num2=5; //n! 구하기
    int mul=1;

    for(i=5; i>=1; i--){ //n에서 1로 감소하며 곱함
        mul*=i;         //숫자가 감소하며 곱해짐
    }
    printf("%d", mul);
    
    return 0;
}
#include <stdio.h> //if를 활용한 10진수 -> 2진수
int main(void){

    int a=10;

    if((a/8)==1){ //8로 나누었을 때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }
    
    if((a%8)/4==1){ //8로 나눈 나머지를 4로 나누었을때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }
    
    if((a%4)/2==1){ //4로 나눈 나머지를 2로 나누었을때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }
    
    if((a%2)/1==1){ //2로 나눈 나머지를 1로 나누었을때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}
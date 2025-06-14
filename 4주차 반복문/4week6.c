#include <stdio.h> //nPr 구하기
int main(void){
    int n=6;
    int r=2;
    int i;
    int result1=1;
    int result2=1;

    for(i=n; i>=1; i--){ //n! 구하기
        result1*=i;
    }

    for(i=n-r; i>=1; i--){ //(n-r)! 구하기
        result2*=i;
    }

    printf("%d", result1/result2);

    return 0;
}
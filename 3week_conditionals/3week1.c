#include <stdio.h> //2차방정식 근의 공식
#include <math.h> //루트(sqrt)를 사용하기 위한 헤더

int main(void){
    float a, b, c, dis;
    a=3, b=2, c=6;
    dis=b*b-4*a*c;

    if(dis==0){ //중근일때
        printf("%f", -b/(2.0*a));
    }
    else if(dis>0){ //실근일때
        printf("%f", (-b+sqrt(dis))/(2.0*a));
        printf("%f", (-b-sqrt(dis))/(2.0*a));
    }
    else{ //허근일때때
        printf("no solution");
    }

    return 0;
}
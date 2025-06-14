#include <stdio.h>
#include <math.h>
int main(void){
    int a, b, c, dis;
    a=2, b=4, c=1;
    dis=b*b-4*a*c;

    switch (dis){ 
        case 0: //중근일때 
            printf("%f", -b/(2.0*a));//실수나눗셈을 위해 2.0
            break;
        default:
            if(dis>0){ //실근일때
                printf("%.2f", (-b+sqrt(dis))/(2*a));//괄호주의
                printf("%.2f", (-b-sqrt(dis))/(2*a));//%f를 사용(루트)
            }
            else{ //허근일때때
                printf("no solution");
            }
            break;

    }

    return 0;
}
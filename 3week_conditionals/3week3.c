#include <stdio.h> //3개의 다른 변수를 내림차순으로로

int main(void){
    int x=2, y=3, z=5;

    if(x>y && x>z){ //x가 가장 클때
        if(y>z){
            printf("%d %d %d", x, y, z);
        }
        else{
            printf("%d %d %d", x, z, y);
        }
    }
    else if(y>x && y>z){ //y가 가장 클때
        if(x>z){
            printf("%d %d %d", y, x, z);
        }
        else{
            printf("%d %d %d", y, z, x);
        }
    }
    else{ //z가 가장 클때때
        if(x>y){
            printf("%d %d %d", z, x, y);
        }
        else{
            printf("%d %d %d", z, y, x);
        }
    }

    return 0;
}
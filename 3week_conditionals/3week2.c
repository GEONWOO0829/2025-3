#include <stdio.h> //몇사분면인지 출력

int main(void){
    int x=4;
    int y=-2;

    if(x>0 && y>0){
        printf("1");
    }
    else if(x<0 && y>0){
        printf("2");
    }
    else if(x<0 && y<0){
        printf("3");
    }
    else{
        printf("4");
    }
    return 0;
}
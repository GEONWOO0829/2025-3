#include <stdio.h>

int main(void)
{
    int x,y;

    printf("정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);

    printf("입력값 : %d %d\n", x, y);

    printf("몫 : %d\n", x/y);
    printf("나머지 : %d\n", x%y);

    return 0;
}
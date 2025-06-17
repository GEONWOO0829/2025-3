#include <stdio.h>
#define LENGTH 20

void calc_divisor(int number, int array[], int length)
{
    int i;
    int index=0;
    for(i=1; i<=number; i++){
        if(number%i==0){
            array[index]=i;
            index++;
        }
    }
}

void printf_array(int array[], int length)
{
    int i;
    for(i=0; i<LENGTH; i++)
    {
        printf("%d ", array[i]);
    }
}

int main(void)
{
    int num=50;
    int divisors[LENGTH];

    calc_divisor(num, divisors, LENGTH);
    printf_array(divisors, LENGTH);
    
    return 0;
}
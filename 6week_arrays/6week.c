#include <stdio.h>
#define LENGTH 20
#include <mem.h> //memcpy 헤더

void print_array(int array[], int length){
    int i;
    for(i=0; i<length; i++){
        printf("%d\n", array[i]);
    }
}

int main(void){
    int array_a[LENGTH]={5, 7, 3, 10, 2, };
    int array_b[LENGTH];

    memcpy(array_b, array_a, 20*sizeof(int)); //memcpy 복사사

    print_array(array_b, LENGTH);
    return 0;
}
#include <stdio.h>
#define SiZE 5
#include <mem.h> //memcpy 헤더

void print_array(int array[], int SIZE){ //프린트 array
    int i;
    for(i=0; i<SIZE; i++){
        printf("%d\n", array[i]);
    }
}

void copy_araay(const int array_a[], int array_b[], int SIZE){ //복사
    int i;
    for(i=0; i<SIZE; i++){
        array_b[i]=array_a[i];
    }
}

int main(void){
    int array_a[SiZE]={1,2,3,4,5,};
    int array_b[SiZE];

    copy_araay(array_a, array_b, SiZE);
    print_array(array_b, SiZE);

    return 0;
}
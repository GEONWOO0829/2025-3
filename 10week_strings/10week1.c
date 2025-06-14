#include <stdio.h>

struct complex {
    double real;
    double imag;
};

struct complex complex_add(struct complex c1, struct complex c2){
    struct complex add;
    add.real= c1.real+c2.real;
    add.imag= c1.imag+c2.imag;
    return add;
}

struct complex complex_sub(struct complex c1, struct complex c2){
    struct complex sub;
    sub.real= c1.real-c2.real;
    sub.imag= c1.imag-c2.imag;
    return sub;
}

struct complex complex_mul(struct complex c1, struct complex c2){
    struct complex mul;
    mul.real= c1.real*c2.real - c1.imag*c2.imag;
    mul.imag= c1.imag*c2.imag;
    return mul;
}

struct complex complex_div(struct complex c1, struct complex c2){
    struct complex div;
    div.real= c1.real/c2.real;
    div.imag= c1.imag/c2.imag;
    return div;
}

int main(void){
    struct complex c1;
    c1. real=
}
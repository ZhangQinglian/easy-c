#include<stdio.h>

int a = 2;

void foo();
int main(){
    extern int a;
    foo();
    printf(" a = %d", a);
    return 0;
}

void foo(){
    a = 2333;
}

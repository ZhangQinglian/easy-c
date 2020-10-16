#include<stdio.h>
// c有三种方式定义常量
// 1. #define
// 2. const
// 3. enum

#define PI 3.14

enum Animal {cat,dog,tigger,bird,fish,snake};
int main(){
    // 将 pi 定义成只读
    const float pi = 3.14;
    enum Animal animal = cat;
    printf("pi = %f, PI = %f, animal = %d",pi,PI,animal);
    return 0;
}
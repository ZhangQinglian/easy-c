#include<stdio.h>
int main(){

    int a = 1;
    //int q = 2*++a;
    int q = 2*a++;
    printf("q = %d\n",q);
    printf("%10d %10d",q,q*q++);
    return 0;
}
#include<stdio.h>
/**
 * 
 *scope:
 *      block scope
 *      function scope
 *      function prototype scope
 *      file scope
 **/
int main(){
    return 0;
}
int matrix[3][2]; // file scope
void foo(int a,int b,int array[a][b]){ // a,b function prototype scope
    int foo; // block scope
    LABEL1:
    {
        printf("label 1");
    }

    LABEL2://function scope
    {
        printf("label 2");
    }
}
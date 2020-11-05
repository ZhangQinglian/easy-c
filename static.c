#include<stdio.h>
void foo();
int main(){
    for (int i = 0; i < 10; i++)
    {
        foo();
    }
    
    return 0;
}

void foo(){
    static int x = 1;
    printf("x = %d\n",x++);
}
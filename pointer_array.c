#include<stdio.h>
int main(){

    int pow[5] = {1,4,9,16,25};
    printf("%d\n",*(pow+1));
    printf("%d\n",pow[1]);
    printf("%ld\n",(pow+1)-(pow));
    printf("%p,%p\n",(pow+1),(pow));

    int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5, 7} };
    int (*px)[2]= zippo; //px是指向包含两个 int 元素数组的数组指针
    px = (int[][2]){{2,4}, {6,8}, {1,3}, {5, 7}};
    int *py[2] = {pow+1,pow+2}; //py 是一个包含两个 int 指针的数组
    return 0;
}
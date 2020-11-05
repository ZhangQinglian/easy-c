#include<stdio.h>
int main(){
    //［标志］［输出最少宽度］［．精度］［长度］类型 
    int fooInt = 11;
    int *fooPtr = &fooInt;
    // 转换符
    printf("%a,   %A\n",3.14,3.14);
    printf("%c\n",'a');
    printf("%d\n",fooInt);
    printf("%e,   %E\n",3.14,3.14);
    printf("%f\n",3.14);
    printf("%g,  %G\n",3.14,3.14);
    printf("%i\n",fooInt);
    printf("%o\n",fooInt);

    printf("%p\n",fooPtr);
    printf("%s\n","hello");
    printf("%u\n",fooInt);
    printf("%x,   %X\n",fooInt,fooInt);
    printf("%%\n");

    // 转换修饰
    printf("%-10s\n","hello"); //左对齐
    printf("%+f,   %+f\n",3.14,-3.14); //输出正负符号+、-
    printf("% f,   % f\n",3.14,-3.14);//正数输出空格，负数输出-
    printf("%#x,  %#o\n",11,11);//输出十六进制和八进制前缀
    printf("%#010x\n",11);//宽度不足填充 0
    printf("%10d\n",11);//输出宽度为 10 的字符串，右对齐
    printf("%10.2f\n",3.1415);//输出宽度为 10，小数点后保留 2 位的字符串
    return 0;
}
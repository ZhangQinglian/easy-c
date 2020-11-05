#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){

    // int 相关常量
    printf("CHAR_BIT = %d\n",CHAR_BIT);
    printf("CHAR_MAX = %d\n",CHAR_MAX);
    printf("CHAR_MIN = %d\n",CHAR_MIN);
    printf("SCHAR_MAX = %d\n",SCHAR_MAX);
    printf("SCHAR_MIN = %d\n",SCHAR_MIN);
    printf("UCHAR_MAX = %d\n",UCHAR_MAX);
    printf("SHRT_MAX = %d\n",SHRT_MAX);
    printf("SHRT_MIN = %d\n",SHRT_MIN);
    printf("USHRT_MAX = %d\n",USHRT_MAX);
    printf("INT_MAX = %d\n",INT_MAX);
    printf("INT_MIN = %d\n",INT_MIN);
    printf("UINT_MAX = %d\n",UINT_MAX);
    printf("LONG_MAX = %ld\n",LONG_MAX);
    printf("LONG_MIN = %ld\n",LONG_MIN);
    printf("ULONG_MAX = %ld\n",ULONG_MAX);
    printf("LLONG_MAX = %lld\n",LLONG_MAX);
    printf("LLONG_MIN = %lld\n",LLONG_MIN);
    printf("ULLONG_MAX = %lld\n",ULLONG_MAX);


    // float 相关常量
    printf("FLT_MANT_DIG = %d\n",FLT_MANT_DIG);
    printf("FLT_DIG = %d\n",FLT_DIG);
    printf("FLT_MIN_10_EXP = %d\n",FLT_MIN_10_EXP);
    printf("FLT_MAX_10_EXP = %d\n",FLT_MAX_10_EXP);
    printf("FLT_MIN = %e\n",FLT_MIN);
    printf("FLT_MAX = %e\n",FLT_MAX);
    printf("FLT_EPSILON = %e\n",FLT_EPSILON);
    return 0;
}
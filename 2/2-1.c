#include<stdio.h>
#include<limits.h>
#include<float.h>

void main(){
    printf("size,minimum and maximum value of char data type: %d bytes, %d, %d \n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
    printf("size,minimum and maximum value of of unsigned char data type: %d bytes, %d, %d \n", sizeof(unsigned char), CHAR_MIN, CHAR_MAX);
    printf("size,minimum and maximum value of of short data type: %d bytes, %d, %d \n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("size,minimum and maximum value of of int data type: %d bytes, %d, %d \n", sizeof(int), INT_MIN, INT_MAX);
    printf("size,minimum and maximum value of of unsigned int data type: %d bytes, %d, %ld \n", sizeof(unsigned int), 0 , UINT_MAX);
    printf("size,minimum and maximum value of of long data type: %d bytes, %ld, %ld \n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("size,minimum and maximum value of of float data type: %d bytes, %.10e, %.10e \n", sizeof(float), FLT_MIN, FLT_MAX);
    return;
}
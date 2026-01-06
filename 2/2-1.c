#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    printf("My machine is 64 bits");
    printf("char data type: size=%d, minimum value=%d, maximum value=%d \n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char data type: size=%d, minimum value=%d, maximum value=%d \n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("int data type: size=%d, minimum value=%d, maximum value=%d \n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int data type: size=%d, minimum value=%d, maximum value=%u \n", sizeof(unsigned int), 0, UINT_MAX);
    printf("unsigned long data type: size=%d, minimum value=%d, maximum value=%u \n", sizeof(unsigned long), 0, ULONG_MAX);
    printf("float data type: size=%d, minimum value=%f, maximum value=%f \n", sizeof(float), FLT_MIN, FLT_MAX);
    return 0; 
}
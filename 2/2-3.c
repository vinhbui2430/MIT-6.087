#include<stdio.h>
int val =0xCAFE; 
int CHECK_ON_BITS();
int main()
{
    int CHECK_ON_BITS(int val, int nbit)
    {
        // nbit = 0x7;
        int CHECK = ((val & nbit) >= 7) ? 1 : 0; 
        if (CHECK == 1) 
        return printf("three of last 4 bits (LSB) are on \n");
        else return printf("not all three of last 4 bits are on \n");
    }
    // printf("%d \n", (val & 0x7));
    return CHECK_ON_BITS(val, 0x7);
}

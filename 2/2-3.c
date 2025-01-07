#include<stdio.h>
int val =0xCAFE, new_val; 
int CHECK_ON_BITS();
int REVERSE_BYTE_ORDER();
int ROTATE_FOUR_BITS();
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
    int REVERSE_BYTE_ORDER(int val)
    {
        return val = ((val & ~0xFF00)<<8 | (val>>0x8));
    }    
    new_val = REVERSE_BYTE_ORDER(val);
    printf("byte order reversed: %X \n", new_val); 
    int ROTATE_FOUR_BITS(int val)
    {
        int ls4b = val & ~0xFFF0;  
        return val = (ls4b<<12) | ((val & ~0xF)>>4);     
    }
    printf("rotated fourbits: %X \n", ROTATE_FOUR_BITS(val)); 
    return 0;
}

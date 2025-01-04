#include<stdio.h>

void main(){
    char c='C'; 
    int check;
    int islower, isupper, isdigit, iswhitespace; 
    islower = (c>='a' && c<= 'z') ?1 :0; 
    isupper = (c>='A' && c<= 'Z') ? 1 :0; 
    isdigit = (c>= 0 && c <= 9) ? 1 : 0;
    iswhitespace = (c =='\n' || c =='\t' || c ==' ' );
    printf("%d \n", iswhitespace);
    return;
}
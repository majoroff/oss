#include <stdio.h>

void main(void){
    char a = 'a';
    char b = 'b';

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %c, b = %c\n", a, b);
}
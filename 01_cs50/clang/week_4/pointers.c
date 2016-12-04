#include <stdio.h>

float x[] = {10.0, 20.0, 30.0, 40.0, 50.0};

void main(){
    float *u1, *u2;
    int i;
    printf("\n Адреса указателей: &u1=%p &u2=%p", &u1, &u2);

    printf("\n Адреса элементов массива: \n");
    for(i=0; i<5; i++){
        if (i == 3) printf("\n");
        printf(" &x[%d] = %p", i, &x[i]);
    }

    printf("Значения элементов массива: \n");

    for (i=0; i<5; i++){
        if (i == 3) printf("\n");
        printf(" x[%d] = %5.1f", i, x[i]);
    }

    for (u1=&x[0], u2=&x[4]; u2>&x[0]; u1++, u2--){
        printf("\n u1=%p *u1=%5.1f u2=%p *u2=%5.1f", u1, *u1, u2, *u2 );
        printf("\n u2-u1=%f", u2-u1);
    }
}
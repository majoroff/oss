#include <stdio.h>
#include <cs50.h>

int GetPositiveInt();

int main(void){
    int n = GetPositiveInt();
    printf("Thanks for %i!\n", n);
}

int GetPositiveInt(void){
    int n;

    do {
        printf("Please, give me a positive int: \n");
        n = GetInt();
    } while(n < 1);

    return n;
}
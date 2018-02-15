#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("minutes: ");
    int minutes = GetInt();
    int bottles = 192 * minutes / 16;
    printf("bottles: %i\n", bottles);
}
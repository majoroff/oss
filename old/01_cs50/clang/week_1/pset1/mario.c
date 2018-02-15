#include <stdio.h>
#include <cs50.h>

int GetPositiveInt();

int main(void){
    int height = GetPositiveInt()+1;
    for (int bricks = 2; bricks <= height; bricks++){
        for(int b = 0; b<height-bricks; b++){
            printf(" ");
        }       
        
        for(int b = 0; b<bricks; b++){
            printf("#");
        }
        printf("\n");
    }
}

int GetPositiveInt(void){
    int n;

    do {
        printf("Height: ");
        n = GetInt();
    } while(n < 0 || n > 23);

    return n;
}
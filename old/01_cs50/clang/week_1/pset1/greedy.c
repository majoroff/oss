#include <stdio.h>
#include <cs50.h>
#include <math.h>

int GetCoins(void);

int main(void){
    int n = GetCoins();
    int i = 0;
    //printf("Coins: %.i\n", n);
    while (n != 0) {
        i++;
        if (n >= 25) {
            //printf("Get 25c\n");
            n -= 25;
            
            continue;
        }
        else if (n<25 && n >= 10){
            //printf("Get 10c\n");
            n -= 10;
            continue;
        }
        else if (n < 10 && n >= 5){
            //printf("Get 5c\n");
            n -= 5;
            continue;
        }
        else if (n<5 && n >= 1){
            //printf("Get 1c\n");
            n -= 1;
            continue;
        }
        
    }
    printf("%.i\n", i);
}

int GetCoins(void){
    float n;
    do {
        printf("O hai! How much change is owed?\n");
        n = GetFloat();
    } while (n < 0 || n > 23);
    
    float cents = n * 100;
    int rounded = (int)round(cents);
    return rounded;
}

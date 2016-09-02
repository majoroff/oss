#include <stdio.h>
#include <cs50.h>
#include <string.h>


char Uppercase(char a);

int main(void){
    string full_name = GetString();
    for (int i = 0, l = strlen(full_name); i<l; i++){
        if(i == 0 || full_name[i-1] == ' '){
            printf("%c", Uppercase(full_name[i]));
        }
    }
    printf("\n");
}

char Uppercase(char a) {
    if ((int) a > 96 && a < 123) {
        int code = (int) a - 32;
        return (char) code;
    } else if ((int) a > 64 && a < 91) {
        return a;
    } else {
        return 0;
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


int main(int argc, string argv[]){
    
    if (argc != 2) {
        printf("You must provide an integer shift value!\n");
        return 1;
    }
    int key = atoi(argv[1]);
    
    char upper_alphabet[26];
    char lower_alphabet[26];
    for (int i = 65, j=0; i < 91; i++, j++){
        upper_alphabet[j] = (char) i;
    }
    for (int i = 97, j=0; i < 123; i++, j++){
        lower_alphabet[j] = (char) i;
    }
    
    string text = GetString();
    
    for (int i = 0; i<strlen(text); i++){
        char letter = text[i];
        if (isalpha(letter)){
            if (isupper(letter)){
                int index = 26 - (91 - (int) letter);
                int shifted = (index+key)%26;  
                printf("%c", upper_alphabet[shifted]);
            } else if (islower(letter)) {
                int index = 26 - (123 - (int) letter);
                int shifted = (index+key)%26;
                printf("%c", lower_alphabet[shifted]);
            } 
        } else {
            printf("%c", letter);
        }
    }
    printf("\n");
    return 0;
}
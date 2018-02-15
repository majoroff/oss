#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


int main(int argc, string argv[]){
    
    if (argc != 2){
        printf("You must provide a string keyword!\n");
        return 1;
    }
    string keyword = argv[1];
    for(int i = 0; i < strlen(keyword); i++){
        if (!isalpha(keyword[i])){
            printf("You must provide a string keyword!\n");
            return 1;            
        }
    }
    string text = GetString();
    char upper_alphabet[26];
    char lower_alphabet[26];
    for (int i = 65, j=0; i < 91; i++, j++){
        upper_alphabet[j] = (char) i;
    }
    for (int i = 97, j=0; i < 123; i++, j++){
        lower_alphabet[j] = (char) i;
    }
    
    
    for (int i = 0, ltrcnt = 0; i<strlen(text); i++){
        char letter = text[i];
        int klen = strlen(keyword);
        int key;
        if (isalpha(letter)){
            if (isupper(letter)){
                int index = 26 - (91 - (int) letter);
                if (isupper(keyword[ltrcnt%klen])){
                    key = (26 - (91 - (int)keyword[ltrcnt%klen]));
                } else {
                    key = (26 - (123 - (int)keyword[ltrcnt%klen]));
                }
                
                int shifted = (index+key)%26;
                ltrcnt++;
                printf("%c", upper_alphabet[shifted]);
            } else if (islower(letter)) {
                int index = 26 - (123 - (int) letter);
                if (isupper(keyword[ltrcnt%klen])){
                    key = (26 - (91 - (int)keyword[ltrcnt%klen]));
                } else {
                    key = (26 - (123 - (int)keyword[ltrcnt%klen]));
                }
                int shifted = (index+key)%26;
                ltrcnt++;
                printf("%c", lower_alphabet[shifted]);
            } 
        } else {
            printf("%c", letter);
        }
    }
    printf("\n");
    return 0;
}
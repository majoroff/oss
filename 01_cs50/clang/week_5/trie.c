#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    bool is_word;
    struct node* children[27];
} node;

node* root;
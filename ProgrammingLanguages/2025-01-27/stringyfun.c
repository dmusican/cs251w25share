#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // String containing hello
    char word[6];
    word[0] = 'h';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    word[5] = '\0';
    printf("%s\n", word);

    // Longer than I need, but I can
    char *word2 = malloc(sizeof(char) * 10);
    // Faster way to initialize
    strcpy(word2, "hello");



}

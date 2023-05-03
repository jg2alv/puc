#include <stdio.h>

int main() {
    char alpha[26];
    for(int i = 0; i < 26; i++) {
        alpha[i] = i + 'A';
    }
    for(int i = 0; i < 26; i++) {
        printf("%c ", alpha[i]);
    }
    printf("\n");
}
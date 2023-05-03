#include <stdio.h>

int* max(int* a, int* b) {
    if(*a >= *b) return a;
    else         return b;
}

int main() {
    int a = 2434;
    int b = 341251;
    printf("max(%d, %d) = %d\n", a, b, *max(&a, &b));
}
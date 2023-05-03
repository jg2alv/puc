#include <stdio.h>
#include <math.h>
#include <string.h>

void reverse(char* arr, int sz) {
    // 0 -> (sz-1)
    // 1 -> (sz-2)
    // n -> (sz-(n+1))
    int temp, swapidx;

    for(int i = 0; i < (int)floor(sz / 2); i++) {
        temp = arr[i];
        swapidx = sz - i - 1;

        arr[i] = arr[swapidx];
        arr[swapidx] = temp;
    }
}

int main() {
    char str[] = "noitcelfer";
    int sz = strlen(str);

    printf("%s\n", str);
    reverse(str, sz);
    printf("%s\n", str);
}
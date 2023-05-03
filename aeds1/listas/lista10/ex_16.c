#include <stdio.h>

void sum(int* arr, int sz, int* result) {
    *result = 0;
    
    for(int i = 0; i < sz; i++) {
        *result += arr[i];
    }
}

int main() {
    int arr[] = {4234, 134531, 345, 35246, 245656, 34213, 724572, 124123, -78367, -34514, 356256, 34161, 12321, 000, 4576347, 46, 214, 0, 1231};
    int result, sz = sizeof(arr) / sizeof(int);
    sum(arr, sz, &result);

    printf("sum(arr) = %d\n", result);
}
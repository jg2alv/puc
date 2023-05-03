#include <stdio.h>
#include <math.h>

void print(int *arr, int sz)
{
    printf("[ ");
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void reverse(int* arr, int sz) {
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
    int arr[] = {4234, 134531, 345, 35246, 245656, 34213, 724572, 124123, -78367, -34514, 356256, 34161, 12321, 000, 4576347, 46, 214, 0, 1231};
    int sz = sizeof(arr) / sizeof(int);

    print(arr, sz);
    reverse(arr, sz);
    print(arr, sz);
}
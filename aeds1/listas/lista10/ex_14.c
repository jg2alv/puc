#include <stdio.h>

void print(int *arr, int sz)
{
    printf("[ ");
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void sort(int *arr, int sz)
{
    int curr, next, temp;

    for (int j = 0; j < sz; j++)
    {
        for (int i = 0; i < sz - 1; i++)
        {
            curr = arr[i];
            next = arr[i + 1];

            if (curr > next)
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {4234, 134531, 345, 35246, 245656, 34213, 724572, 124123, -78367, -34514, 356256, 34161, 12321, 000, 4576347, 46, 214, 0, 1231};
    int sz = sizeof(arr) / sizeof(int);

    print(arr, sz);
    sort(arr, sz);
    print(arr, sz);
}

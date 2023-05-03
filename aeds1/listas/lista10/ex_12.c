#include <stdio.h>

void factorial(int n, long *result)
{
    if (n < 0)
    {
        printf("Erro: fatorial só existe para números positivos");
    }
    else
    {
        *result = 1;
        for (int i = 1; i <= n; i++)
        {
            *result *= i;
        }
    }
}

int main()
{
    int n = 0;
    long r;
    factorial(n, &r);
    printf("%ld\n", r);
}
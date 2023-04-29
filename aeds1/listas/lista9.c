// URL: https://pucminas.instructure.com/courses/148103/files/8458229?module_item_id=3267917

#include <stdio.h>
#include <math.h>

#define FIB_MAX 64
#define DIM (int)ceil(sqrt(FIB_MAX))

long long int memo[FIB_MAX];

long long int fib(int n)
{
    if (memo[n - 1])
        return memo[n - 1];
    if (n < 1)
        return 0;
    if (n == 1)
        return 1;
    if (n > 1)
    {
        memo[n - 1] = fib(n - 1) + fib(n - 2);
        return memo[n - 1];
    }
}

void ex1a()
{
    FILE *fp = fopen("letra_a.txt", "w");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return;
    }

    for (int i = 1; i <= FIB_MAX; i++)
    {
        fprintf(fp, "%lld ", fib(i));
    }

    fclose(fp);
}

void ex1b()
{
    FILE *fp = fopen("letra_a.txt", "r");
    long long int fibmat[DIM][DIM];

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return;
    }

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            fscanf(fp, "%lld", &fibmat[i][j]);
        }
    }

    for (int i = 0; i < DIM; i++)
    {
        printf("| ");

        for (int j = 0; j < DIM; j++)
        {
            printf("%lld ", fibmat[i][j]);
        }

        printf("|\n");
    }

    fclose(fp);
}

void ex1c()
{
    FILE *fp = fopen("letra_a.txt", "r");
    FILE *fp2 = fopen("letra_c.txt", "w");
    long long int fibmat[DIM][DIM];

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return;
    }

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            fscanf(fp, "%lld", &fibmat[i][j]);
        }
    }

    for (int i = 0; i < DIM; i++)
    {
        fprintf(fp2, "| ");

        for (int j = 0; j < DIM; j++)
        {
            fprintf(fp2, "%lld ", fibmat[i][j]);
        }

        fprintf(fp2, "|\n");
    }

    fclose(fp);
    fclose(fp2);
}

void ex1d()
{
    FILE *fp = fopen("letra_a.txt", "r");
    FILE *fp2 = fopen("letra_d_pares.txt", "w");
    FILE *fp3 = fopen("letra_d_impares.txt", "w");
    long long int fibmat[DIM][DIM];

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return;
    }

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            fscanf(fp, "%lld", &fibmat[i][j]);
        }
    }

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            long long int curr = fibmat[i][j];
            if (curr % 2 == 0)
                fprintf(fp2, "%lld ", curr);
            else
                fprintf(fp3, "%lld ", curr);
        }
    }

    fclose(fp);
    fclose(fp2);
    fclose(fp3);
}

int isprime(long long int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;

    for (int i = 2; i <= (int)ceil(sqrt(n)); i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void ex1e()
{
    FILE *fp = fopen("letra_a.txt", "r");
    FILE *fp2 = fopen("letra_e.txt", "w");
    long long int fibarr[FIB_MAX];
    int count = 0;

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return;
    }

    for (int i = 0; i < FIB_MAX; i++)
    {
        long long int curr;
        fscanf(fp, "%lld", &curr);

        if (isprime(curr))
        {
            fibarr[count] = curr;
            printf("%lld\n", curr);
            fprintf(fp2, "%lld ", curr);
            count++;
        }
    }

    fclose(fp);
    fclose(fp2);
}

int main()
{
    ex1a();
    ex1b();
    ex1c();
    ex1d();
    ex1e();

    return 0;
}
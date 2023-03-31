// URL: https://pucminas.instructure.com/courses/148103/files/8156397?module_item_id=3189104

#include <stdio.h>
#include <math.h>

void ex1_1a()
{
    int sum = 0;

    for(int i = 1; i <= 20; i++)
        sum += i;
}

void ex1_1b()
{
    int sum = 0;

    for(int i = 1; i <= 20; i++)
        sum += pow(i, 2);
}

void ex1_1c()
{
    int sum = 0;

    for(int i = 1; i <= 20; i++)
        sum += pow(i, i);
}

void ex1_2a()
{
    int prod = 1;

    for(int k = 1; k <= 20; k++)
        prod *= k;
}

void ex1_2b()
{
    int prod = 1;

    for(int k = 1; k <= 20; k++)
        prod *= pow(k, 2);
}

void ex1_2c()
{
    int prod = 1;

    for(int k = 1; k <= 20; k++)
        prod *= pow(k, k);
}

void ex2_1a()
{
    int total = 0;

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
            total -= pow(i, 2);
        else
            total += pow(i, 2);
    }
}

void ex2_1b()
{
    int total = 0;

    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
            total -= pow(i, i);
        else
            total += pow(i, i);
    }
}

void ex2_2a()
{
    int total = 0;

    for(int i = 1; i <= 20; i++)
        total *= pow(i, 2);
}

void ex2_2b()
{
    int prod = 1;

    for(int i = 1; i <= 20; i++)
        prod *= pow(i, i);
}

void ex2_3a()
{
    double sum = 0;

    for(int i = 1; i <= 20; i++)
        sum += sqrt(i);
}

void ex2_3b()
{
    double sum = 0;

    for(int i = 1; i <= 19; i++)
        sum += pow(i, i) / sqrt(i + 1);
}

void ex3()
{
    int n, r;
    int p = 1;
    int i = 2;

    scanf("%d", &n);

    do
    {
        r = n % i;
        if(r == 0)
            p = 0;
        i++;
    }
    while(i >= n - 1 || !p);

    // N: 7, 11, 13, 25, 37, 38
    // p: 1,  1,  1,  1,  1,  ?
}

void ex4()
{
    int a, b, i, temp, r, q;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    r = a % b;
    while(r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }

    q = b;

    // a: 2, 3, 13, 25, 37, 16
    // b: 4, 5,  6, 12, 12, 38
    // q: 2, 1,  1,  1,  1,  2

    // q representa o MDC de a e b --> letra (c)
}

int fat(int n)
{
    int fat = 1;

    if(n < 0)
        return 0;
    else if(n == 0 || n == 1)
        return 1;

    for(int i = n; i >= 2; i--)
        fat *= i;

    return fat;
}

void ex5_1()
{
    int n;
    scanf("%d", &n);

    fat(n);
}

void ex5_2()
{
    int M;
    int sum = 0;
    scanf("%d", &M);

    for(int q = 1; q <= M; q++)
        sum += fat(q);
}

int main()
{
    ex1_1a();
    ex1_1b();
    ex1_1c();
    ex1_2a();
    ex1_2b();
    ex1_2c();
    ex2_1a();
    ex2_1b();
    ex2_2a();
    ex2_2b();
    ex2_3a();
    ex2_3b();
    ex3();
    ex4();
    ex5_1();
    ex5_2();

    return 0;
}
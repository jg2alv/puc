// URL: https://pucminas.instructure.com/courses/148103/files/8152122?module_item_id=3187760

#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.141592
#endif

void ex1a()
{
    for(int i = 10; i <= 50; i++)
        printf("%d\n", i);
}

void ex1b()
{
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    for(double i = a; i <= b; i++)
        printf("%lf\n", i);
}

void ex1c()
{
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a <= b)
        for(double i = a; i <= b; i++)
            printf("%lf\n", i);
    else
        for(double i = b; i <= a; i++)
            printf("%lf\n", i);
}

void ex2()
{
    for(int i = 1; i <= 90; i++)
    {
        double ang = i * M_PI / 180;
        printf("%lf %lf %lf", sin(ang), cos(ang), tan(ang));
    }
}

void ex3()
{
    for(int i = 0; i < 128; i++)
        printf("%d --> %c", i, (char)i);
}

void ex4()
{
    int sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        printf("%d + %d = %d\n", sum, i, i + sum);
        sum += i;
    }
}

void ex5()
{
    double a, b;
    int sum = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a < b)
        for(int i = ceil(a); i <= ceil(b); i++)
            if(i % 2 != 0)
                sum += i;
    else
        for(int i = ceil(b); i <= ceil(a); i++)
            if(i % 2 != 0)
                sum += i;

    printf("%d", sum);
}

void ex6()
{
    double a, b;
    int sum = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a < b)
    {
        for(int i = ceil(a); i <= ceil(b); i++)
        {
            if(i % 2 != 0 && i % 3 == 0)
                sum += i;
        }

    }
    else
    {
        for(int i = ceil(b); i <= ceil(a); i++)
        {
            if(i % 2 != 0 && i % 3 == 0)
                sum += i;
        }    
    }

    printf("%d", sum);
}

void ex7()
{
    int a, b;
    int total = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    for(int i = 1; i <= 1000; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("%d\n", i);
            total++;
        }
    }

    printf("%d", total);
}

void print_divisors(int n)
{
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            printf("%d", i);
    }
}

void ex8()
{
    int n;

    scanf("%d", &n);
    print_divisors(n);
}

void ex9()
{
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a < b)
    {
        for(int i = ceil(a); i <= ceil(b); i++)
            print_divisors(i);
    }
    else
    {
        for(int i = ceil(b); i <= ceil(a); i++)
            print_divisors(i);
    }
}

int is_prime(int n)
{
    if(n <= 1)
        return 0;
    else if(n == 2)
        return 1;

    for(int i = 2; i <= ceil(sqrt(n)); i++)
    {
        if(n % i == 0)
            return 0;
    }
    
    return 1;
}

void ex10()
{
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    if(a < b)
    {
        for(int i = ceil(a); i <= ceil(b); i++)
        {
            if(is_prime(i))
                printf("%d\n", i);
        }
   }
    else
    {
        for(int i = ceil(b); i <= ceil(a); i++)
        {
            if(is_prime(i))
                printf("%d\n", i);
        }
    }
}

int main()
{
    ex1a();
    ex1b();
    ex1c();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    ex10();

    return 0;
}
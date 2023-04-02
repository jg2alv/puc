#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415
#endif

void ex_r_05()
{
    int n1, n2, n3, n4;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    if (n4 > n3)
        printf("%d %d %d %d\n", n4, n3, n2, n1);
    if (n4 > n3 && n4 < n3)
        printf("%d %d %d %d\n", n3, n4, n2, n1);
    if (n4 > n1 && n4 < n2)
        printf("%d %d %d %d\n", n3, n2, n4, n1);
    if (n4 < n1)
        printf("%d %d %d %d\n", n3, n2, n1, n4);
}

void ex_p_05()
{
    double n1, n2;
    int op;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        double avg = (n1 + n2) / 2;
        printf("avg: %lf\n", avg);
        break;

    case 2:
        double diff = abs(n1 - n2);
        printf("diff: %lf\n", diff);
        break;

    case 3:
        double prod = n1 * n2;
        printf("prod: %lf\n", prod);
        break;

    case 4:
        if (n2 != 0)
            printf("div: %lf\n", n1 / n2);
        break;

    default:
        printf("invalid option!\n");
        break;
    }
}

void ex_p_10()
{
    double price, cost, perc, tax;

    scanf("%lf", &cost);

    if (cost < 12000)
    {
        perc = cost * 0.05;
        tax = 0.0;
    }
    else if (cost >= 12000 && cost <= 25000)
    {
        perc = cost * 0.1;
        tax = cost * 0.15;
    }
    else
    {
        perc = cost * 0.15;
        tax = cost * 0.2;
    }

    price = cost + perc + tax;
    printf("price: %lf\n", price);
}

void ex_p_15()
{
    int type;
    double value;

    scanf("%d", &type);
    scanf("%lf", &value);

    switch (type)
    {
    case 1:
        value *= 1.03;
        break;

    case 2:
        value *= 1.04;
        break;

    default:
        printf("invalid option!\n");
        return;
    }

    printf("final value for investment %d: %lf\n", type, value);
}

void ex_p_20()
{
    int age;

    scanf("%d", &age);

    if (age >= 5 && age <= 7)
        printf("infantil\n");
    else if (age >= 8 && age <= 10)
        printf("juvenil\n");
    else if (age >= 11 && age <= 15)
        printf("adolescente\n");
    else if (age >= 16 && age <= 30)
        printf("adulto\n");
    else if (age > 30)
        printf("senior\n");
}

void ex_p_25()
{
    int prize, ext, abs;

    scanf("%d", &ext);
    scanf("%d", &abs);

    double H = 60 * (ext - 2 * abs / 3);

    if (H < 600)
        prize = 100;
    else if (H >= 600 && H < 1200)
        prize = 200;
    else if (H >= 1200 && H < 1800)
        prize = 300;
    else if (H >= 1800 && H < 2400)
        prize = 400;
    else
        prize = 500;

    printf("%d\n", prize);
}

int main()
{
    ex_r_05();
    ex_p_05();
    ex_p_10();
    ex_p_15();
    ex_p_20();
    ex_p_25();

    return 0;
}
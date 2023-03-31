#include <stdio.h>
#include <math.h>

#ifndef M_PI
    #define M_PI 3.1415
#endif

void ex_r_1()
{
    double n1, n2, n3, n4, sum;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);

    sum = n1 + n2 + n3 + n4;

    printf("%lf\n", sum);
}


void ex_r_5()
{
    double sal, perc, nsal;

    scanf("%lf", sal);
    scanf("%lf", perc);

    nsal = sal * (perc / 100);

    printf("%lf", nsal);
}


void ex_r_10()
{
    double radius, area;

    scanf("%lf", &radius);

    area = M_PI * pow(radius, 2);

    printf("%lf", area);
}


void ex_r_15()
{
    double price0, perc_prof, perc_tax, price, prof, tax;

    scanf("%lf", &price0);
    scanf("%lf", &perc_prof);
    scanf("%lf", &perc_tax);

    prof = price0 * (perc_prof / 100);
    tax = price0 * (perc_tax / 100);
    price = price0 + prof + tax;

    printf("%lf %lf %lf", prof, tax, price);
}


void ex_r_20()
{
    double deg, h, rad, l;

    scanf("%lf", &deg);
    scanf("%lf", &h);

    rad = deg * M_PI / 180;
    l = h * sin(rad);

    printf("%lf", l);
}


void ex_r_25()
{
    double price_total, price_ticket;
    int n;

    scanf("%lf", &price_total);
    scanf("%lf", &price_ticket);

    n = ceil(price_total / price_ticket);

    printf("%d", n);
}


int main()
{
    ex_r_1();
    ex_r_5();
    ex_r_10();
    ex_r_15();
    ex_r_20();
    ex_r_25();

    return 0;
}
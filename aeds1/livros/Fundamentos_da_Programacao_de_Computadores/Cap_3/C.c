#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415
#endif

void ex_r_05()
{
    double sal, perc, nsal;

    scanf("%lf", sal);
    scanf("%lf", perc);

    nsal = sal * (perc / 100);

    printf("%lf\n", nsal);
}

void ex_r_10()
{
    double radius, area;

    scanf("%lf", &radius);

    area = M_PI * pow(radius, 2);

    printf("%lf\n", area);
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

    printf("%lf %lf %lf\n", prof, tax, price);
}

void ex_r_20()
{
    double deg, h, rad, l;

    scanf("%lf", &deg);
    scanf("%lf", &h);

    rad = deg * M_PI / 180;
    l = h * sin(rad);

    printf("%lf\n", l);
}

void ex_r_25()
{
    double price_total, price_ticket;
    int n;

    scanf("%lf", &price_total);
    scanf("%lf", &price_ticket);

    n = ceil(price_total / price_ticket);

    printf("%d\n", n);
}

void ex_p_05()
{
    double price, nprice;

    scanf("%lf", &price);

    nprice = price * 0.9;

    printf("%lf\n", nprice);
}

void ex_p_10()
{
    double l, area;

    scanf("%lf", &l);

    area = pow(l, 2);

    printf("%lf\n", area);
}

void ex_p_15()
{
    double b1, b2, sal;

    scanf("%lf", &b1);
    scanf("%lf", &b2);
    scanf("%lf", &sal);

    sal -= 1.02 * (b1 + b2);

    printf("%lf\n", sal);
}

void ex_p_20()
{
    double deg, dis, rad, l;

    scanf("%lf", &deg);
    scanf("%lf", &dis);

    rad = deg * M_PI / 180;
    l = dis / cos(rad);

    printf("%lf\n", l);
}

void ex_p_25()
{
    double hour, min, conv, tmin, sec;

    scanf("%lf", &hour);
    scanf("%lf", &min);

    conv = hour * 60;
    tmin = conv + min;
    sec = tmin * 60;

    printf("%lf\n", conv);
    printf("%lf\n", tmin);
    printf("%lf\n", sec);
}

int main()
{
    ex_r_05();
    ex_r_10();
    ex_r_15();
    ex_r_20();
    ex_r_25();
    ex_p_05();
    ex_p_10();
    ex_p_15();
    ex_p_20();
    ex_p_25();

    return 0;
}
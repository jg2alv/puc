// URL: https://pucminas.instructure.com/courses/148104/files/8118722?module_item_id=3175795

#include <stdio.h>
#include <string.h>

void ex1()
{
    double n1, n2;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    if(n1 < n2)
        printf("%lf\n", n1);
    else
        printf("%lf\n", n2);
}

void ex2()
{
    double age;
    char name[16], profession[16], eyecolor[16], gender[16];

    scanf(" %s", &name);
    scanf("%lf", &age);
    scanf(" %s", &eyecolor);
    scanf(" %s", &profession);
    scanf(" %s", &gender);

    if(age < 20.0 && !strcmp(eyecolor, "verde") && !strcmp(gender, "feminino"))
        printf("%s\n", name);

    printf("%s", eyecolor);
}

double max(double a, double b)
{
    if(a >= b)
        return a;
    else
        return b;
}

double min(double a, double b)
{
    if(a <= b)
        return a;
    else
        return b;
}

void ex3()
{
    double n1, n2, n3, grt, sml, mdl;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

    grt = max(max(n1, n2), n3);
    sml = min(min(n1, n2), n3);

    if(grt == n1)
    {
        if(sml == n2)
            mdl = n3;
        else if(sml == n3)
            mdl = n2;
    }
    else if(grt == n2)
    {
        if(sml == n1)
            mdl = n3;
        else if(sml == n3)
            mdl = n1;
    }
    else if(grt == n3)
    {
        if(sml == n1)
            mdl = n2;
        else if(sml == n2)
            mdl = n1;
    }

    printf("%lf %lf %lf\n", sml, mdl, grt);
}

void ex4()
{
    char code[16];
    double amnt, price, prft;

    scanf(" %s", code);
    scanf("%lf", amnt);
    scanf("%lf", price);
    scanf("%lf", prft);

    if(amnt < 20)
        prft = 0.3;
    else if(amnt >= 20 && amnt < 50)
        prft = 0.2;
    else
        prft = 0.1;

    printf("%s\n", code);
    printf("%lf\n", (1 + prft) * price);
    printf("%lf\n", prft * price);
}

int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    
    return 0;
}
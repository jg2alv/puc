// URL: https://pucminas.instructure.com/courses/148103/files/8063553?module_item_id=3151232

#include <stdio.h>
#include <stdlib.h>

void ex4a()
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("The successor of %lf is %lf\n\n", num, num + 1);
}

void ex4b()
{
    double n1, n2, n3, n4, mean;

    printf("Enter the first number: ");
    scanf("%lf", &n1);

    printf("Enter the second number: ");
    scanf("%lf", &n2);

    printf("Enter the third number: ");
    scanf("%lf", &n3);

    printf("Enter the fourth number: ");
    scanf("%lf", &n4);

    mean = (n1 + n2 + n3 + n4) / 4;
    printf("The arithmetic average is: %lf\n\n", mean);
}

void ex4c()
{
    double n1, n2, n3, n4, w1, w2, w3, w4;
    double mean;

    printf("Enter the first number: ");
    scanf("%lf", &n1);
    printf("Enter the first weight: ");
    scanf("%lf", &w1);

    printf("Enter the second number: ");
    scanf("%lf", &n2);
    printf("Enter the second weight: ");
    scanf("%lf", &w2);

    printf("Enter the third number: ");
    scanf("%lf", &n3);
    printf("Enter the third weight: ");
    scanf("%lf", &w3);

    printf("Enter the fourth number: ");
    scanf("%lf", &n4);
    printf("Enter the fourth weight: ");
    scanf("%lf", &w4);

    mean = (n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4) / (w1 + w2 + w3 + w4);
    printf("The average is: %lf\n\n", mean);
}

void ex4d()
{
    // A formula no PDF ta errada.
    double c, f;

    printf("Enter a temperature in Celsius: ");
    scanf("%lf", &c);

    f = c/5 * 9 + 32;
    printf("%lf°C = %lf°F\n\n", c, f);
}

void ex4e()
{
    double sal, perc;

    printf("Enter a salary: ");
    scanf("%lf", &sal);

    printf("Enter a increase percentage (from 0 to 1, without percentage sign): ");
    scanf("%lf", &perc);
    perc++;

    printf("The new salary is %lf\n\n", sal * perc);
}

void ex4f()
{
    double b, h, a;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &b);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &h);

    if(b <= 0 || h <= 0)
    {
        printf("The base and the height must be positive numbers");
        return;
    }

    a = b * h / 2;
    printf("The area of the triangle is %lf\n\n", a);
}

void ex4g()
{
    double bag, daily, after5days;

    printf("Enter the amount of ration in the bag (kilokgrams): ");
    scanf("%lf", &bag);

    printf("Enter the daily ration for a cat (grams): ");
    scanf("%lf", &daily);

    if(bag <= 0 || daily <= 0)
    {
        printf("Ration in bag and daily amount must be positive numbers");
        return;
    }

    after5days = (bag * 1000) - (daily * 2 * 5);
    if(after5days < 0)
        printf("There's not enough ration in the bag\n\n");
    else
        printf("After 5 days, there's %lf grams left in the bag\n\n", after5days);
}

void ex4h()
{
    int a, b, aux;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("Now, a is %d and b is %d\n\n", a, b);
}

void ex4i()
{
    int n, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The remainder of %d divided by 7 is %d\n\n", n, n % 7);
}

void ex4j()
{
    int a1, a2, r, an, n, sum;

    printf("Enter the first integer: ");
    scanf("%d", &a1);

    printf("Enter the second integer: ");
    scanf("%d", &a2);

    printf("Enter the amount of integers: ");
    scanf("%d", &n);

    r = a2 - a1;
    an = a1 + (n - 1) * r;
    sum = n * (a1 + an) / 2;

    printf("The sum is %d\n\n", sum);
}

void ex51()
{
    // n is even
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", n % 2 == 0);
}

void ex52()
{
    // n is odd
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", n % 2 != 0);
}

void ex53()
{
    // n is odd and n > 100
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", n % 2 != 0 && n > 100);
}

void ex54()
{
    // (n is even and n > 100) || (n is odd and n < 100)
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", (n % 2 == 0 && n > 100) || (n % 2 != 0 && n < 100));
}

void ex55()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", n > 25 && n < 75);
}

void ex56()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", n >= 25 && n <= 75);
}

void ex57()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d\n\n", (n >= 15 && n <= 45) || (n >= 66 && n <= 99));
}

void ex58()
{
    int a, b;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter another integer: ");
    scanf("%d", &b);

    printf("%d\n\n", (a % 2 == 0) || (b % 2 != 0));
}

void ex59()
{
    int a, b;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter another integer: ");
    scanf("%d", &b);

    printf("%d\n\n", (a % 2 == 0 && a > 0) || (b % 2 != 0 && b < 0));
}

void ex510()
{
    double a, b;

    printf("Enter a number: ");
    scanf("%lf", &a);

    printf("Enter another number: ");
    scanf("%lf", &b);

    if(a > b)
        printf("%lf > %lf\n\n", a, b);
    else if(a < b)
        printf("%lf < %lf\n\n", a, b);
    else
        printf("%lf == %lf\n\n", a, b);
}

void ex511()
{
    // b < a < c
    double a, b, c;

    printf("Enter a number: ");
    scanf("%lf", &a);

    printf("Enter another number: ");
    scanf("%lf", &b);

    printf("Enter yet another number: ");
    scanf("%lf", &c);

    printf("%d\n\n", a > b && a < c);
}

void ex512()
{
    // !(b < a < c)
    double a, b, c;

    printf("Enter a number: ");
    scanf("%lf", &a);

    printf("Enter another number: ");
    scanf("%lf", &b);

    printf("Enter yet another number: ");
    scanf("%lf", &c);

    printf("%d\n\n", !(a > b && a < c));
}

/*
    As proximas tres funcoes usam `scanf(" %c")`,
    com um espaco antes do %, em vez de `scanf("%c")`.
    Isso eh necessario pq a linguagem C eh feita de tal
    forma que o scanf("%c") trata qualquer coisa como
    um caracter - inclusive o linebreak (\n) da linha
    anterior. Por esse motivo, usa-se o espaco.
    `scanf(" %c")` diz pro compilador o seguinte: "ei,
    compilador, pule qualquer espaco em branco que pode
    ter sido dado no inicio, ele nao eh o caracter a ser
    lido". Ai da certo, o compilador le o caracter que vc
    digita propriamente dito, nao o linebreak :)
    Se vc quiser testar, descomenta a linha `ex5131()`
    e veja o resultado vc msm. Eh uma copia da `ex513()`,
    so que sem o espaco antes do %c.
*/ 
void ex513()
{
    char a, b, c;

    printf("Enter a character: ");
    scanf(" %c", &a);

    printf("Enter another character: ");
    scanf(" %c", &b);

    printf("Enter yet another character: ");
    scanf(" %c", &c);

    printf("%d\n\n", a > b && a < c);
}

void ex5131()
{
   char a, b, c;

    printf("Enter a character: ");
    scanf("%c", &a);

    printf("Enter another character: ");
    scanf("%c", &b);

    printf("Enter yet another character: ");
    scanf("%c", &c);

    printf("%d\n\n", a > b && a < c); 
}

void ex514()
{
    char a, b, c;

    printf("Enter a character: ");
    scanf(" %c", &a);

    printf("Enter another character: ");
    scanf(" %c", &b);

    printf("Enter yet another character: ");
    scanf(" %c", &c);

    printf("%d\n\n", a > b && a < c);
}

void ex515()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    // ASCII capital letters go from 65 (A) to 90 (Z)
    printf("%d\n\n", c >= 65 && c <= 90);
}

int main()
{
    ex4a();
    ex4b();
    ex4c();
    ex4d();
    ex4e();
    ex4f();
    ex4g();
    ex4h();
    ex4i();
    ex4j();
    ex51();
    ex52();
    ex53();
    ex54();
    ex55();
    ex56();
    ex57();
    ex58();
    ex59();
    ex510();
    ex511();
    ex512();
    ex513();
    //ex5131();
    ex514();
    ex515();

    return 0;
}

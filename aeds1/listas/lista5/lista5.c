// URL: https://pucminas.instructure.com/courses/148103/files/8251116?module_item_id=3214347

#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.141592
#endif

// Sphere (quadratic)
double f1(double *x, int n)
{
    double sum = 0;

    for (int i = 0; i <= n - 1; i++)
        sum += pow(x[i], 2);

    return sum;
}

// Rosenbrock
double f2(double *x, int n)
{
    double sum = 0;

    for (int i = 0; i < n - 1; i++)
        sum += (100 * (pow(pow(x[i], 2) - x[i + 1], 2) + pow(1 - x[i], 2)));

    return sum;
}

// Degrau - De Jong
int f3(double *x, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += (int)x[i];

    return sum;
}

// Gauss - De Jong
// double f4(double* x, int n)
// {
//     double sum = 0;

//     for(int i = 0; i < n; i++)
//         sum += i * pow(x[i], 4) + Gauss(0, 1)

//     return sum;
// }

// Shekel's Foxholes
// double f5(double* x, int n)
// {
//     double sum = 0.002;
//     double ssum = 0;

//     for(int j = 0; j < 25; j++)
//     {
//         for(int i = 0; i < 2; i++)
//             ssum += pow(x[i] - a[i][j], 6);

//         sum += 1 / (1 + j + ssum);
//     }

//     return sum;
// }

// Schaffer
double f6(double *x, int n)
{
    double xsum = pow(x[0], 2) + pow(x[1], 2);
    return pow(xsum, 0.25) * (pow(sin(50 * pow(xsum, 0.1)), 2) + 1);
}

// [sem nome]
double f7(double *x, int n)
{
    return (pow(x[0], 2) + pow(x[1], 2)) / 2 - cos(20 * M_PI * x[0]) * cos(20 * M_PI * x[1]) + 2;
}

// Rastrigin
double f8(double *x, int n)
{
    double sum = 10 * n;

    for (int i = 0; i < n; i++)
        sum += pow(x[i], 2) - 10 * cos(2 * M_PI * x[i]);

    return sum;
}
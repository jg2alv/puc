// URL: https://pucminas.instructure.com/courses/148103/files/8251116?module_item_id=3214347

#include <stdio.h>
#include <math.h>

#define M_PI 3.141593


// Sphere (quadratic)
int f1(int* x, int n)
{
    int sum = 0;

    for(int i = 1; i <= n; i++)
        sum += pow(x[i - 1], 2);

    return sum;
}

// Rosenbrock
double f2(double* x, int n)
{
    double sum = 0;

    for(int i = 1; i < n; i++)
        sum += (100*(pow(pow(x[i - 1], 2) - x[i], 2) + pow(1 - x[i - 1], 2)));

    return sum;
}


// Degrau - De Jong
int f3(double* x, int n)
{
    int sum = 0;

    for(int i = 1; i <= n; i++)
        sum += (int)x[i - 1];
        
    return sum;
}


// Gauss - De Jong
// double f4(double* x, int n)
// {
//     double sum = 0;

//     for(int i = 1; i <= n; i++)
//         sum += i * pow(x[i], 4) + Gauss(0, 1)

//     return sum;
// }


// Shekel's Foxholes
// double f5(double* x, int n)
// {
//     double sum = 0.002;
//     double ssum = 0;

//     for(int j = 1; j <= 25; j++)
//     {    
//         for(int i = 1; i <= 2; i++)
//             ssum += pow(x[i - 1] - a[i - 1][j - 1], 6);

//         sum += 1 / (j + ssum); 
//     }

//     return sum;
// }


// Schaffer
double f6(int* x, int n)
{
    int xsum = pow(x[0], 2) + pow(x[1], 2);
    return pow(xsum, 0.25) * (pow(sin(50 * pow(xsum, 0.1)), 2) + 1);
}


// [sem nome]
double f7(int* x, int n)
{
    return (pow(x[0], 2) + pow(x[1], 2)) / 2 - cos(20 * M_PI * x[0]) * cos(20 * M_PI * x[1]) + 2;
}


// Rastrigin
double f8(double* x, int n)
{
    double sum = 10 * n;

    for(int i = 1; i <= n; i++)
        sum += pow(x[i - 1], 2) - 10 * cos(2 * M_PI * x[i - 1]);

    return sum;
}

int main()
{
    int af1[] = {0,0,0};
    double af2[] = {1,1};
    double af3[] = {0,0,0,0,0};
    double af4[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double af5[] = {0,0};
    int af6[] = {0,0};
    int af7[] = {0,0};
    double af8[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    
    printf("%d\n", f1(af1, 3));
    printf("%lf\n", f2(af2, 2));
    printf("%d\n", f3(af3, 5));
    //printf("%lf\n", f4(af4, 30));
    //printf("%lf\n", f5(af5, 2));
    printf("%lf\n", f6(af6, 2));
    printf("%lf\n", f7(af7, 2));
    printf("%lf\n", f8(af8, 20));
    
    return 0;
}
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

#include "reader.h"

void print_test(double eresult, double result, int suite, const char *status)
{
    printf("\tSuite S%d:\n", suite + 1);
    printf("\t\tResultado esperado: %lf\n", eresult);
    printf("\t\tResultado real:     %lf\n", result);
    printf("\t\tErro:               %lf\n", eresult - result);
    printf("\t\tStatus:             %s\n", status);
    printf("\n");
}

void print_statistics(double *errors, int sz, int passed, int failed)
{
    double sum, avg, amp, dp = 0, grt = INT_MIN, sml = INT_MAX;

    for (int i = 0; i < sz; i++)
    {
        double curr = errors[i];

        if (curr > grt)
            grt = curr;
        else if (curr < sml)
            sml = curr;

        sum += curr;
    }

    avg = sum / sz;
    amp = grt - sml;

    for (int i = 0; i < sz; i++)
    {
        dp += pow(errors[i] - avg, 2);
    }

    dp = sqrt(dp / sz);

    printf("\tConclusoes:\n");
    printf("\t\tMedia dos erros:                   %lf\n", avg);
    printf("\t\tAmplitude dos erros:               %lf\n", amp);
    printf("\t\tDesvio padrao dos erros:           %lf\n", dp);
    printf("\t\tNumero de testes que passaram:     %d\n", passed);
    printf("\t\tNumero de testes que nao passaram: %d\n", failed);
    printf("\n");
}

void test(const char *path, double (*f)(double *, int), double maxerror)
{
    FILE *fp = fopen(path, "r");

    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo %s.\n", path);
        return;
    }

    int failed = 0, passed = 0, sz = get_test_suite_size(fp);
    double errors[sz];

    printf("Iniciando testes no arquivo %s\n", path);

    for (int i = 0; i < sz; i++)
    {
        int dim = get_test_suite_dimension(fp);
        double values[dim], eresult, result;

        get_test_suite_values(fp, dim, values);
        get_test_suite_result(fp, &eresult);

        result = f(values, dim);
        errors[i] = eresult - result;

        if (fabs(errors[i]) > maxerror)
        {
            print_test(eresult, result, i, "nao passou");
            failed++;
        }
        else
        {
            print_test(eresult, result, i, "passou");
            passed++;
        }
    }

    print_statistics(errors, sz, passed, failed);
    printf("Testes em %s finalizados.\n\n", path);
}
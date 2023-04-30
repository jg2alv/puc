#include <stdio.h>

int get_test_suite_size(FILE *fp)
{
    int sz;
    fscanf(fp, "%d", &sz);

    return sz;
}

int get_test_suite_dimension(FILE *fp)
{
    return get_test_suite_size(fp);
}

void get_test_suite_values(FILE *fp, int dim, double *values)
{
    for (int i = 0; i < dim; i++)
    {
        fscanf(fp, "%lf", &values[i]);
    }
}

void get_test_suite_result(FILE *fp, double *result)
{
    fscanf(fp, "%lf", result);
}
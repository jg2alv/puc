#include <stdio.h>

void print_test(double eresult, double result, int suite, const char *status);
void print_statistics(double *errors, int sz, int passed, int failed);
double test(const char *path, double (*f)(double *, int), double maxerror);
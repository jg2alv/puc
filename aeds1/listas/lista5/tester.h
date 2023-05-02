#include <stdio.h>

void print_statistics(double *errors, int sz, int passed, int failed);
double test(const char *path, double (*f)(double *, int), double maxerror);
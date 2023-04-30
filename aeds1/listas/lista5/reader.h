#include <stdio.h>

int get_test_suite_size(FILE *fp);
int get_test_suite_dimension(FILE *fp);
void get_test_suite_values(FILE *fp, int dim, double *values);
void get_test_suite_result(FILE *fp, double *result);
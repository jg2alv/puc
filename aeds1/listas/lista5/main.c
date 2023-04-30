#include <stdio.h>
#include <limits.h>

#include "tester.h"
#include "lista5.h"

// Erro maximo: 10^-4
#define MAX_ERROR 0.0001

int main()
{
    test("rastrigin.txt", f8, MAX_ERROR);
    test("sphere.txt", f1, MAX_ERROR);

    return 0;
}
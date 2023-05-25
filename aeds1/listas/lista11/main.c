#include <stdio.h>
#include <stdlib.h>

#include "TSP.h"
#include "permut.h"

#define DIM 10

void wrapper(int* ordem, int dim) {
    FILE *fp = fopen("matrix.txt", "r");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return;
    }

    int dist = TSP(ordem, dim, fp);
    
    printf("A distancia para [ ");
    for(int i = 0; i <= dim; i++) {
        printf("%d ", ordem[i]);
    }
    printf("] eh %d\n", dist);
}

int main(void)
{
    int ordem[DIM + 1] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    ordem[DIM] = 0;

    permut(ordem, wrapper, 0, DIM - 1);
}



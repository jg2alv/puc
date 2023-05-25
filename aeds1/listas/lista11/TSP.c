#include <stdio.h>
#include <stdlib.h>

int TSP(int* ordem, int dim, FILE* fp)
{
    int M[dim][dim], dist = 0;

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            fscanf(fp, "%d", &M[i][j]);
        }
    }

    for (int i = 0; i < dim; i++)
    {
        int from = ordem[i];
        int to = ordem[i + 1];
        dist += M[from][to];
    }

    fclose(fp);
    return dist;
}
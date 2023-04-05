#include <stdio.h>
#include <stdlib.h>

void ex1()
{
    int N = 15;

    float avg = 0;
    float n[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%f", &n[i]);
        avg += n[i];
    }

    float pm = (n[0] + n[N - 1]) / 2;
    float med = 0;
    float var = 0;
    avg /= N;

    if(N % 2 == 0)
        med = (n[N / 2] + n[N / 2 + 1]) / 2;
    else
        med = n[floor(N / 2)];

    for(int i = 0; i < N; i++) {
        var += pow(n[i] - avg, 2);
    }

    printf("media: %f", avg);
    printf("ponto medio: %f", pm);
    printf("mediana: %f", med);
    printf("desvio padrao: %lf", sqrt(var / N));
}

void ex2()
{
    int N = 15;

    float pts[N][2][2];
    double maxdist = 0;
    float[2][2] maxdistpt;

    for(int i = 0; i < N; i++)
    {
        double dist = 0;

        for(int j = 0; j < 2; j++) {
            scanf("%f", pts[i][j][0]);
            scanf("%f", pts[i][j][1]);
        }

        dist = sqrt(pow(pts[i][0][0] - pts[i][1][0], 2) + pow(pts[i][0][1] - pts[i][1][1], 2));
        if(dist > maxdist)
        {
            maxdist = dist;
            maxdistpt = pts[i];
        }
    }

    printf("maior distancia: %lf\n", maxdist);
    printf("pontos que geraram essa distancia: (%f, %f) -> (%f, %f)\n", maxdistpt[0][0], maxdistpt[0][1], maxdistpt[1][0], maxdistpt[1][1]);
}

void ex3()
{
    
}

int main()
{
    return 0;
}
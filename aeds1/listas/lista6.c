// URL: https://pucminas.instructure.com/courses/148103/files/8334443?module_item_id=3233135

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
        med = n[(int)floor(N / 2)];

    for(int i = 0; i < N; i++) {
        var += pow(n[i] - avg, 2);
    }

    printf("media: %f\n", avg);
    printf("ponto medio: %f\n", pm);
    printf("mediana: %f\n", med);
    printf("desvio padrao: %lf\n", sqrt(var / N));
}

void ex2()
{
    int N = 15;

    double maxdist = 0;
    float pts[N][2][2];
    float maxdistpt[2][2];

    for(int i = 0; i < N; i++)
    {
        double dist = 0;

        for(int j = 0; j < 2; j++) {
            scanf("%f", &pts[i][j][0]);
            scanf("%f", &pts[i][j][1]);
        }

        dist = sqrt(pow(pts[i][0][0] - pts[i][1][0], 2) + pow(pts[i][0][1] - pts[i][1][1], 2));
        if(dist > maxdist)
        {
            maxdist = dist;
            maxdistpt[0][0] = pts[i][0][0];
            maxdistpt[0][1] = pts[i][0][1];
            maxdistpt[1][0] = pts[i][1][0];
            maxdistpt[1][1] = pts[i][1][1];
        }
    }

    printf("maior distancia: %lf\n", maxdist);
    printf("pontos que geraram a maior distancia: (%f, %f) -> (%f, %f)\n", maxdistpt[0][0], maxdistpt[0][1], maxdistpt[1][0], maxdistpt[1][1]);
}

void ex3()
{
    float x1, x2, y1, y2;
    
    scanf("%f %f", &x1, &x2);
    scanf("%f %f", &y1, &y2);
    
    if(y1 >= x1 && y1 <= x1)
        printf("Y C X");
    else if(x1 >= y1 && x1 <= y1)
        printf("X C Y");
    else
        printf("indeterminado");
        
    printf("[%f, %f]\n", x1 + y1, x2 + y2);
}

int main()
{
    ex1();
    ex2();
    ex3();

    return 0;
}
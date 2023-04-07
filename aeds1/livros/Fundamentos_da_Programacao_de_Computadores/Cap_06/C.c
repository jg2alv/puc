#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415
#endif

void ex_r_10()
{
    char gab[8];
    int pts = 0;
    int ap = 0;

    for (int i = 0; i < 8; i++)
        scanf(" %c", &gab[i]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char ans;
            scanf(" %c", &ans);
            if (ans == gab[i])
                pts++;
        }

        if (pts >= 6)
            ap++;

        pts = 0;
    }

    printf("percentual de aprovados: %d\n", ap * 10);
}

void ex_r_15()
{
    int nums[10];
    int divs[5];

    for (int i = 0; i < 10; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < 5; i++)
        scanf("%d", &divs[i]);

    for (int i = 0; i < 10; i++)
    {
        int n = nums[i];
        int div = 0;
        printf("Numero %d\n", n);

        for (int i = 0; i < 5; i++)
        {
            if (n % divs[i] == 0)
            {
                div = 1;
                printf("Divisivel por %d na posicao %d", divs[i], i);
            }
        }

        if (!div)
            printf("Nao possui divisores no segundo vetor\n");
    }
}

void ex_r_20()
{
    double nums[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &nums[i]);

    int code;
    scanf("%d", &code);

    switch (code)
    {
    case 0:
        break;

    case 1:
        for (int i = 4; i >= 0; i--)
            printf("%f ", nums[i]);

    case 2:
        for (int i = 0; i < 5; i++)
            printf("%f ", nums[i]);

    default:
        printf("Opcao invalida!");
        break;
    }

    printf("\n");
}

void ex_r_25()
{
    int primes[10];
    int prime = 1;
    int count = 101;
    int i = 0;
    int len = sizeof(primes) / sizeof(int);

    while (i < len)
    {
        for (int j = 2; j < ceil(sqrt(count)); j++)
        {
            if (count % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            primes[i] = count;
            i++;
        }

        count++;
        prime = 1;
    }

    for (i = 0; i < len; i++)
        printf("%d ", primes[i]);

    printf("\n");
}

int main()
{
    ex_r_10();
    ex_r_15();
    ex_r_20();
    ex_r_25();

    return 0;
}
// URL: https://pucminas.instructure.com/courses/148103/files/8438197?module_item_id=3262381

#include <stdio.h>
#include <limits.h>

void ex1()
{
    int A[100], sum = 0;

    for (int i = 0; i < 100; i++)
    {
        A[i] = rand() % 100;
    }

    for (int i = 0; i < 100; i++)
    {
        sum += A[i];
    }

    printf("%d\n", sum);
}

void ex2()
{
    int A[100], x;
    scanf("%d", &x);

    for (int i = 0; i < 100; i++)
    {
        A[i] = rand() % 100;
    }

    for (int i = 0; i < 100; i++)
    {
        if (A[i] == x)
        {
            printf("%d ", i);
        }
    }
}

void ex3()
{
    int n, pos = 0;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % n;
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] >= A[pos])
            pos = i;
    }

    printf("%d\n", pos);
}

void ex4()
{
    int n, diff = INT_MIN;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % n;
    }

    for (int i = 0; i < (n - 1); i++)
    {
        int currdiff = A[i] - A[i + 1];
        if (currdiff > diff)
            diff = currdiff;
    }

    printf("%d\n", diff);
}

void ex5()
{
    int i, j;
    scanf("%d %d", &i, &j);

    int a[i][j], t[j][i];

    for (int row = 0; row < i; row++)
    {
        for (int col = 0; col < j; col++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int row = 0; row < j; row++)
    {
        for (int col = 0; col < i; col++)
        {
            t[row][col] = a[col][row];
        }
    }

    // printing
    for (int row = 0; row < i; row++)
    {
        printf("| ");

        for (int col = 0; col < j; col++)
        {
            printf("%d ", a[row][col]);
        }

        printf("|\n");
    }

    printf("\n\n");

    for (int row = 0; row < j; row++)
    {
        printf("| ");

        for (int col = 0; col < i; col++)
        {
            printf("%d ", t[row][col]);
        }

        printf("|\n");
    }
}

int ex6()
{
    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n], r[n][n];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &b[row][col]);
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            r[row][col] = a[row][col] + b[row][col];
        }
    }
}

void ex7()
{
    int a[4][4], x, sumrow = 0, sumcol = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &x);

    for (int i = 0; i < 4; i++)
    {
        sumcol += a[i][x - 1];
    }

    for (int j = 0; j < 4; j++)
    {
        sumrow += a[x - 1][j];
    }

    if (sumrow > sumcol)
        printf("A soma dos elementos da linha %d é maior do que a soma dos elementos da coluna %d", x, x);
    else
        printf("A soma dos elementos da linha %d é menor do que a soma dos elementos da coluna %d", x, x);
}

void ex8()
{
    char names[150][30], grtn[150][30], smln[150][30];
    int abv = 0, blw, grt = INT_MIN, sml = INT_MAX, grtcount = 0, smlcount = 0;
    double grades[150], avg = 0;

    for (int i = 0; i < 150; i++)
    {
        scanf("%lf", &grades[i]);
        scanf("%s", &names[i]);
    }

    for (int i = 0; i < 150; i++)
        avg += grades[i];

    avg /= 150;

    for (int i = 0; i < 150; i++)
    {
        double curr = grades[i];

        if (curr > avg)
        {
            if (curr >= grt)
            {
                grt = curr;
                strcpy(grtn[grtcount], names[i]);
                grtcount++;
            }

            abv++;
        }
        else if (curr < avg)
        {
            if (curr <= sml)
            {
                sml = curr;
                strcpy(smln[smlcount], names[i]);
                smlcount++;
            }

            blw++;
        }
    }

    printf("Media: %lf\n%d acima e %d abaixo\n", avg, abv, blw);

    printf("%d pessoas tem a maior nota (%lf):\n", grtcount, grt);
    for (int i = 0; i < grtcount; i++)
    {
        printf("\t- %s", grtn[i]);
    }

    printf("%d pessoas tem a menor nota (%lf):\n", smlcount, sml);
    for (int i = 0; i < smlcount; i++)
    {
        printf("\t- %s", smln[i]);
    }
}

/*
    essa funcao funciona so com matriz quadradas (2x2, 3x3...)
    nao sei por que nao da com qlqr matriz
    quem descobrir ganha uma bebida :p
*/
void ex9()
{
    int i1, j1, i2, j2;
    scanf("%d %d", &i1, &j1);
    scanf("%d %d", &i2, &j2);

    if (j1 != i2)
    {
        printf("Impossivel multiplicar com essas dimensoes!");
        return;
    }

    int a[i1][j1], b[i2][j2], r[i1][j2];

    for (int i = 0; i < i1; i++)
    {
        for (int j = 0; j < j1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < i2; i++)
    {
        for (int j = 0; j < j2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < i1; i++)
    {
        for (int j = 0; j < j2; j++)
        {
            int res = 0;

            /*
                poderia ter sido jj < i2,
                porque, necessariamente,
                j1 == i2. note a condicao
                de saida no inicio da fun-
                cao.
            */
            for (int jj = 0; jj < j1; jj++)
            {
                res += a[i][jj] * b[jj][j];
            }

            r[i][j] = res;
        }
    }

    // printing
    for (int row = 0; row < i1; row++)
    {
        printf("| ");

        for (int col = 0; col < j2; col++)
            printf("%d ", r[row][col]);

        printf("|\n");
    }
}

int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    return 0;
}
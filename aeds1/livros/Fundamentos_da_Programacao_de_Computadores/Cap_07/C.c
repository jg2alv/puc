#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415
#endif

void ex_r_05()
{
    const int mat[4][7];
    int sml = 999999;
    int grt = -99999;
    int row = 0;
    int col = 0;

    const int ROWS = sizeof(mat) / sizeof(int);
    const int COLS = sizeof(mat[0]) / sizeof(int);

    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            scanf("%d", &mat[r][c]);
        }
    }

    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            int curr = mat[r][c];

            if (curr < sml)
            {
                row = r;
                sml = curr;
            }
        }
    }

    for (int c = 0; c < COLS; c++)
    {
        int curr = mat[row][c];
        if (curr > grt)
        {
            grt = curr;
            col = c;
        }
    }

    printf("\nLinha: %d\nColuna: %d\n", row + 1, col + 1);
}

void ex_r_10()
{
    int mat[10][10];
    int temp;

    const int ROWS = sizeof(mat) / sizeof(int);
    const int COLS = sizeof(mat[0]) / sizeof(int);

    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            scanf("%d", &mat[r][c]);
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        temp = mat[1][i];
        mat[1][i] = mat[7][i];
        mat[7][i] = temp;
    }

    for (int i = 0; i < ROWS; i++)
    {
        temp = mat[i][3];
        mat[i][3] = mat[i][9];
        mat[i][9] = temp;
    }

    for (int i = 0, j = ROWS - 1; i < ROWS; i++, j--)
    {
        temp = mat[i][i];
        mat[i][i] = mat[i][j];
        mat[i][j] = temp;
    }

    for (int i = 0; i < ROWS; i++)
    {
        temp = mat[4][i];
        mat[4][i] = mat[i][9];
        mat[i][9] = temp;
    }
}

void ex_p_17()
{
    int mat[10][10];
    double avg = 0;

    const int ROWS = sizeof(mat) / sizeof(int);
    const int COLS = sizeof(mat[0]) / sizeof(int);

    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            scanf("%d", &mat[r][c]);
        }
    }

    for (int i = 0; i < ROWS; i++)
        avg += mat[i][i];

    printf("Average: %f\n", avg / ROWS);
}

void ex_p_21()
{
    int mat[5][5];

    const int ROWS = sizeof(mat) / sizeof(int);
    const int COLS = sizeof(mat[0]) / sizeof(int);

    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            scanf("%d", &mat[r][c]);
        }
    }

    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            mat[r][c] *= mat[r][r];
            printf("%d ", mat[r][c]);
        }

        printf("\n");
    }
}

int main()
{
    ex_r_05();
    ex_r_10();
    ex_p_17();
    ex_p_21();

    return 0;
}
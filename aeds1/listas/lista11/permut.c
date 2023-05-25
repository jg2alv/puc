#include <stdio.h>

void mudarPosicao(int *c1, int *c2)
{
    int tmp;
    tmp = *c1;
    *c1 = *c2;
    *c2 = tmp;
}

void permut(int *ordem, void (*f)(int *, int), int start, int end)
{
    if (start == end) {
        ordem[end + 1] = ordem[0];
        return f(ordem, end + 1);
    }

    for (int i = start; i <= end; i++)
    {
        mudarPosicao(&ordem[start], &ordem[i]);
        permut(ordem, f, start + 1, end);
        mudarPosicao(&ordem[start], &ordem[i]);
    }
}
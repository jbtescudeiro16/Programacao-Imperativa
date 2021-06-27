#include <stdio.h>

int cardinalMSet(int N, int v[N])
{

    int i = 0, soma = 0;
    for (i; i < N; i++)
    {
        soma += v[i];
    }
    return soma;
}
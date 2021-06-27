#include <stdio.h>

//testado no code board
int unionMSet(int N, int v1[N], int v2[N], int r[N])
{
    int i = 0;
    for (i; i < N; i++)
    {
        if (v1[i] < v2[i])
        {
            r[i] = v2[i];
        }
        else
            r[i] = v1[i];
    }
}
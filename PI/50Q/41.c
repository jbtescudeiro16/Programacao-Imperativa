#include <stdio.h>

void addTo(int N, int M, int a[N][M], int b[N][M])
{
    int mnova[N][M];
    int i, j;
    int temp = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mnova[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            a[i][j] = mnova[i][j];
        }
    }
}
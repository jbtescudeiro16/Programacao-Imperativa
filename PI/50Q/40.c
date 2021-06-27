#include <stdio.h>

void transposta(int N, float m[N][N])
{
    int i, j;
    float temp = 0.0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i >= j)
            {
                temp = m[j][i];
                m[j][i] = m[i][j];
                m[i][j] = temp;
            }
        }
    }
}
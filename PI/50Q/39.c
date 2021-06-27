#include <stdio.h>

int triSup(int N, float m[N][N])
{
    int l = 0, col = 0;
    for (l; l < N; l++)
    {

        for (col = 0; col < l; col++)
        {
            if ((m[l][col]) != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
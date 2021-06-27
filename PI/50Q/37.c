#include <stdio.h>

int minInd(int v[], int n)
{
    int i, min = v[0], indice = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            indice = i;
        }
    }
    return indice;
}
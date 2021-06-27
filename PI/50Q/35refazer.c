#include <stdio.h>

int comunsOrd(int a[], int na, int b[], int nb)
{
    int i, j, conta = 0;
    ;

    for (i = 0; i < na; i++)
    {
        for (j = 0; i < nb; j++)
        {
            if (a[i] == b[j])
            {
                conta++;
                break;
            }
        }
        return conta;
    }
}
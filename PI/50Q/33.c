#include <stdio.h>

int pertece(int v[], int n, int tam)
{
    int i = 0, ret = 0;
    {
        for (i; i < tam; i++)
        {
            if (v[i] == n)
                ret = 1;
        }
        //printf("%d\n", ret);
        return ret;
    }
}

int elimRep(int v[], int n)
{
    int i = 0, j = 0;
    int vet[200];
    for (i; i < n; i++)
    {
        if ((pertece(v, v[i], n) == 1) && pertece(vet, v[i], j) == 0)
        {
            vet[j] = v[i];
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf("novo %d\n", vet[i]);
    }

    for (i = 0; i < j; i++)
    {
        v[i] = vet[i];
    }
    printf(" o sacana do jota é %d", j);
    return j;
}

void main()
{

    int arr[10] = {1, 2, 3, 4, 5, 5, 6, 6, 7, 6};
    elimRep(arr, 10);
}
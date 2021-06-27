#include <stdio.h>

int retiraNeg(int v[], int N)
{
    int auxiliar[100];
    int i = 0, contador = 0, j = 0;
    for (i; i <= N - 1; i++)
    {
        if (v[i] < 0)
            contador++;
        else
        {
            auxiliar[j] = v[i];
            j++;
        }
    }

    for (i = 0; i <= j - 1; i++)
    {
        v[i] = auxiliar[i];
    }

    for (i = 0; i <= j - 1; i++)
    {
        printf("%d\n", v[i]);
    }
    printf("O num de sobreviventes é :%d\n", (N - contador));
    return (N - contador);
}

void main()
{
    int arr[15] = {1, 2, 3, 4, -3, -3, 2, -2, 34, 12, -5, 45, 24, 10, -1};
    retiraNeg(arr, 15);
}
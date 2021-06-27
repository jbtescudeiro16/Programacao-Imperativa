#include <stdio.h>
void insere(int v[], int N, int x)
{
    int i;
    int aux[N + 1];
    int j = 0;
    for (i = 0; i < N; i++)
    {
        if (i == 0)
        {
            if (x < v[i])
            {
                aux[j] = x;
                j++;
            }
        }
        if (i == N - 1)
        {
            if (x >= v[i])
            {
                aux[j] = v[i];
                j++;
                aux[j] = x;
                j++;
            }
        }
        if ((x >= v[i]) && (x < v[i + 1]))
        {
            aux[j] = v[i];
            j++;
            aux[j] = x;
            j++;
        }
        else
        {
            aux[j] = v[i];
            j++;
        }
    }
    for (i = 0; i < N + 1; i++)
        v[i] = aux[i];
}

void main()
{

    int arr[20] = {1, 2, 3, 5, 6, 7, 8, 8, 9, 10, 10, 11};
    insere(arr, 20, 5);
}
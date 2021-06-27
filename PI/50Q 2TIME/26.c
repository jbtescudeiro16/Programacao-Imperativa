

void insere(int v[], int N, int x)
{
    int aux[100];
    int i = 0, j = 0;
    if (x < v[0])
    {
        aux[j] = x;
        j++;
        for (i; i < N; i++)
        {
            aux[j] = v[i];
            j++;
        }
    }

    else
    {
        for (i; v[i] < x; i++)
        {
            aux[j] = v[i];
            j++;
        }
        aux[j] = x;
        j++;
        for (i; i < N; i++)
        {
            aux[j] = v[i];
            j++;
        }
    }
    j = 0;
    for (i = 0; i <= N; i++)
    {
        v[i] = aux[j];
        j++;
    }
}
int pertence(int v[], int x, int n)
{
    int i = 0;
    for (i; i < n; i++)
    {
        if (v[i] == x)
            return 1;
    }
    return 0;
}

int elimRep(int v[], int N)
{
    int i = 0, j = 0;
    int aux[200];
    for (i; i < N; i++)
    {
        if (pertence(aux, v[i], j) == 0)
        {
            aux[j] = v[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
    {
        v[i] = aux[i];
    }
    return j;
}
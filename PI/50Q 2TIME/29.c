

int retiraNeg(int v[], int N)
{
    int aux[200];
    int i = 0, j = 0;

    for (i; i < N; i++)
    {
        if (v[i] >= 0)
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
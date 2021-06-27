

int retiraNeg(int v[], int N)
{
    int i = 0, j = 0, comp;
    int aux[200];
    for (i; i < N; i++)
    {
        if (v[i] < 0)
        {
        }
        else
        {
            aux[j] = v[i];
            j++;
        }
    }
    comp = j;
    for (i = 0, j = 0; i < comp; i++)
    {
        v[i] = aux[j];
        j++;
    }
}
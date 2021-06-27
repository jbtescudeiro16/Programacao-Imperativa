

int minInd(int v[], int n)
{
    int min = v[0], i = 0, indice = 0;
    for (i; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            indice = i;
        }
    }
    return indice;
}
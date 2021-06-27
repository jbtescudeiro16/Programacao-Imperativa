

int minInd(int v[], int n)
{
    int menor = v[0], menor_ind = 0, i;
    for (i = 0; i < n; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
            menor_ind = i;
        }
    }
    return menor_ind;
}
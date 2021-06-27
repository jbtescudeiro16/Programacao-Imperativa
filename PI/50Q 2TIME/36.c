int comuns(int a[], int na, int b[], int nb)
{
    int i = 0, j = 0, conta = 0;
    for (i = 0; i < na; i++)
    {
        for (j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {
                conta++;
                break;
            }
        }
    }
    return conta;
}

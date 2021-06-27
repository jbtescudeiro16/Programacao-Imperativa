

int comunsOrd(int a[], int na, int b[], int nb)
{
    int numa = 0, numb = 0, conta = 0;
    while (numa < na && numb < nb)
    {
        if (a[numa] < b[numb])
            numa++;
        else if (a[numa] > b[numb])
            numb++;
        else if (a[numa] == b[numb])
        {
            numa++;
            numb++;
            conta++;
        }
    }
    return conta;
}

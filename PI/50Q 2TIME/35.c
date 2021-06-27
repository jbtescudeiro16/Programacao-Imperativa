

int comunsOrd(int a[], int na, int b[], int nb)
{
    int numb = 0, numa = 0, conta = 0;
    while (numb < nb && numa < na)
    {
        if (a[numa] > b[numb])
            numb++;
        if (a[numa] < b[numb])
            numa++;
        if (a[numa] == b[numb])
        {
            numb++;
            numa++;
            conta++;
        }
    }
    return conta;
}
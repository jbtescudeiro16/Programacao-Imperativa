

void merge(int r[], int a[], int b[], int na, int nb)
{
    int numa = 0, numb = 0, numr = 0, i;
    for (i = 0; i < na + nb; i++)
        if (numa == na)
        {
            r[numr] = b[numb];
            numb++;
            numr++;
        }
        else if (numb == nb)
        {
            r[numr] = a[numa];
            numa++;
            numr++;
        }
        else if (b[numb] > a[numa])
        {
            r[numr] = a[numa];
            numa++;
            numr++;
        }
        else
        {
            r[numr] = b[numb];
            numb++;
            numr++;
        }
}
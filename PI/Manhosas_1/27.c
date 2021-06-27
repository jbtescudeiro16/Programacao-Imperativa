

void merge(int r[], int a[], int b[], int na, int nb)
{
    int numa = 0, numb = 0, numr = 0;
    for (numr; numr < na + nb; numr++)
    {
        if (numa == na)
        {
            r[numr] = b[numb];
            numb++;
        }
        else if (numb == nb)
        {
            r[numr] = a[numa];
            numa++;
        }
        else if (a[numa] < b[numb])
        {
            r[numr] = a[numa];
            numa++;
        }
        else
        {
            r[numr] = b[numb];
            numb++;
        }
    }
}
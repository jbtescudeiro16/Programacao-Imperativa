

int crescente(int a[], int i, int j)
{
    int res = 1;
    for (i; i < j; i++)
    {
        if (a[i] <= a[i + 1])
            res *= 1;
        else
            return 0;
    }
    return res;
}
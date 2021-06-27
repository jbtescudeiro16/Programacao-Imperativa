

int crescente(int a[], int i, int j)
{
    int ret = 1;
    for (i; i < j; i++)
    {
        if (a[i] > a[i + 1])
        {
            ret *= 0;
        }
    }
    return ret;
}
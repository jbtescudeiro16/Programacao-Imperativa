

int maxCresc(int v[], int N)
{
    int max = 1, count = 1, i = 0;
    for (i; i < N; i++)
    {
        if (v[i] <= v[i + 1])
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    return max;
}
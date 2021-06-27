

int unionSet(int N, int v1[N], int v2[N], int r[N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        if (v1[i] == 0 && v2[i] == 0)
        {
            r[i] = 0;
        }
        else
        {
            r[i] = 1;
        }
    }
}
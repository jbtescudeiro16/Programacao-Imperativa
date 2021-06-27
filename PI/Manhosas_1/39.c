

int triSup(int N, int m[N][N])
{
    int i, j, ret = 1;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (j < i)
            {
                if (m[i][j] == 0)
                {
                    ret *= 1;
                }
                else
                    return 0;
            }
        }
    }
    return ret;
}
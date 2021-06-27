void transposta(int N, float m[N][N])
{
    int j, i;
    float aux = 0.0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }
}
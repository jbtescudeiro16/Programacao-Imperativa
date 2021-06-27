

typedef struct posicao
{
    int x, y;
} Posicao;

int maiscentral(Posicao pos[], int N)
{
    int i = 1, gindice = 0;
    float max = ((pos[0].x) * (pos[0].x) + (pos[0].y) * (pos[0].y));
    for (i; i < N; i++)
    {
        if (((pos[i].x) * (pos[i].x) + (pos[i].y) * (pos[i].y)) < max)
        {
            max = ((pos[i].x) * (pos[i].x) + (pos[i].y) * (pos[i].y));
            gindice = i;
        }
    }
    return gindice;
}
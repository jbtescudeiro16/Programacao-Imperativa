
typedef struct nodo
{
    int valor;
    struct nodo *esq, *dir;
} * ABin;

int dumpAbin(ABin a, int v[], int N)
{
    int esq = 0, dir = 0;
    if (!a || N < 0)
    {
        return 0;
    }
    else
    {
        esq = dumpAbin(a->esq, v, N);
        {
            if (N > esq)
            {
                v[esq] = a->valor;
                return (esq + 1 + dumpAbin(a->dir, v + esq + 1, N - esq - 1));
            }
            else
                return N;
        }
    }
}

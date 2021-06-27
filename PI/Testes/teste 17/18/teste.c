
//1
int retiraNeg(int v[], int N)
{
    int i = 0, j = 0;
    int aux[200];
    for (i; i < N; i++)
    {
        if (v[i] >= 0)
        {
            aux[j] = v[i];
            j++;
        }
    }
    for (i = 0; i < j; i++)
    {
        v[i] = aux[i];
    }
    return j;
}

//2
int difConsecutivos(char s[])
{
    int i = 0, max = 0, conta = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (s[i + 1] != s[i])
        {
            conta++;
        }
        else
        {
            if (conta > max)
                max = conta;
            conta = 0;
        }
    }
    return max;
}

//3

int maximo(LInt l)
{
    int max = 0;
    while (l)
    {
        if (l->valor > max)
            max = l->valor;
        l = l->prox;
    }
    return max;
}
//4

int removeAll(LInt *l, int x)
{
    int conta = 0;
    if (!*l)
        return 0;
    else
    {
        LInt curr = *l;
        LInt ant = NULL;
        while (curr)
        {
            if (curr->valor == x)
            {
                if (ant == NULL)
                {
                    *l = (*l)->prox;
                }
                else
                {
                    ant->prox = curr->prox;
                }
                conta++;
                curr = curr->prox;
            }
            else
            {
                ant = curr;
                curr = curr->prox;
            }
        }
    }
    return conta;
}
//5

LInt arrayToList(int v[], int N)
{
    if (N == 0)
        return NULL;
    else
    {
        LInt novo = malloc(sizeof(struct lligada));
        novo->valor = *v;
        novo->prox = arrayToList(v + 1, N - 1);
        return novo;
    }
}

//GRUPO 2

//1
int minheapOK(ABin a)
{
    int i = a->valor;
    if (!a)
        return 1;
    if (!a->esq && !a->dir)
        return 1;
    if a
}
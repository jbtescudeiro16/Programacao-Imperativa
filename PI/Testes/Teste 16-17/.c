

//1
int limpaEspacos(char t[])
{
    int i = 0, j = 0;
    char aux[200];
    for (i; t[i] != '\0'; i++)
    {
        if (t[i] == ' ' && t[i + 1] != ' ')
        {
            aux[j] = t[i];
            j++;
        }
        else if (t[i] == ' ' && t[i + 1] == ' ')
        {
        }
        else
        {
            aux[j] = t[i];
            j++;
        }
    }
    aux[j] = '\0';
    strcpy(t, aux);
    return j;
}

//2

void transposta(int N, float m[N][N])
{
    int i, j;
    float temp = 0.0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i >= j)
            {
                temp = m[j][i];
                m[j][i] = m[i][j];
                m[i][j] = temp;
            }
        }
    }
}

//3

LInt cloneL(LInt l)
{
    if (!l)
        return NULL;
    else
    {
        LInt new = malloc(sizeof(struct lligada));
        new->valor = l->valor;
        l = l->prox;
        new->prox = cloneL(l);
        rerturn new;
    }
}

//4

int nivelV(ABin a, int n, int v[])
{
    int i = 0;
    if (!a)
        return 0;
    if (n == 1)
    {
        *v = a->valor;
        return 1;
    }
    else
    {
        esq = nivelV(a->esq, n - 1, v);
        return esq + nivelV(a->dir, n - 1, v + esq);
    }
}

//5

void removeMaiorA(ABin *A)
{
    int flag = 0;
    while ((*a) != NULL && flag == 0)
    {
        if ((*a)->dir == NULL)
        {
            ABin aux = *a;
            (*a) = (*a)->esq;
            free(aux);
            flag = 1;
        }
        else
            a = &((*a)->dir);
    }
}
//1

char *mystrcat(char s1[], char s2[])
{
    int i, j = 0;

    for (i = 0; s1[i] != '\0'; i++)
    {
    }
    for (j; s2[j] != '\0'; j++)
    {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

//2

int remRep(char x[])
{
    int i = 0, j = 0;
    char aux[200];
    for (i = ; x[i] != '\0'; i++)
    {
        if (x[i] != x[i + 1])
        {
            aux[j] = x[i];
            j++;
        }
    }
    aux[j] = '\0';
    strcpy(x, aux);
    return j;
}

//3

int nivelV(ABin a, int n, int v[])
{
    if (!a || n < 0)
        return 0;
    if (n == 1)
    {
        *v = a->valor;
        return 1;
    }
    else
    {
        int esq = nivelV(a->esq, n - 1, v);
        int dir = nivelV(a->dir, n - 1, v + esq);
        return esq + dir;
    }
}

//4
int addOrd(ABin *a, int x)
{
    if (!a)
        return 0;
    while (*a)
    {
        if ((*a)->valor == x)
            return 1;
        else if ((*a)->valor > x)
            a = &((*a)->esq);
        else
            a = &((*a)->dir);
    }
    ABin nova = malloc(sizeof(struct nodo));
    nova->valor = x;
    nova->esq = NULL;
    nova->dir = NULL;
    *a = nova;
    return 0;
}
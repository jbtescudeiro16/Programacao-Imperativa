
//1

int sumhtpo(int n)
{
    int arr[100];

    int r = 0;
    while (n != 1)
    {
        r += n;

        arr[i] == n;
        i++;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 1 + (3 * n);
    }
    if (i = 99)
    {
        //ordena o array e fica com a preimeira posiçaõ
        //return primeira posição do array ordenado
    }
    else
        return -1;
}

//2

int moda(int v[], int N, int *m)
{
    int i = 0, j = 0, max = 0, multi = 0, conta = 0;
    if (N == 0)
        return 0;
    else
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (v[i] == v[j])
                    conta++;
            }
            if (conta == max && *m != v[i])
                multi = 1;

            if (conta > max)
            {
                multi = 0;
                max = conta;
                *m = v[i];
            }
            conta = 0;
        }
        if (multi == 1)
            return 0;
        return max;
    }
}

//3

int procura(LInt *l, int x)
{

    if (!l)
        return 1;
    LInt curr = *l;
    ant = NULL;
    while (curr)
    {
        if (curr->valor == x)
        {
            if (ant = NULL)
            {
                return 1;
            }
            else
            {
                ant->prox = curr->prox;
                curr->prox = old;
                *l = curr;
                return 1;
            }
        }
        ant = curr;
        curr = curr->prox;
    }
    return 0;
}

//4

int freeAB(ABin a)
{
    if (!a)
        return 0;

    else
    {
        return 1 + freeAB(a->esq) + freeAB(a->dir);
        free(a);
    }
}

// 5

void caminho(ABin a)
{
    int v[100];
    int i = 0;
    while (a->pai)
    {
        if (a->valor > a->pai->valor)
            v[i] = 0;
        else
            v[i] = 1;
        i++;
        a = a->pai
    }
    while (i)
    {
        if (v[i] == 1)
            printf("esq\n");
        else
            printf("dir\n");
        i--;
    }
    if (v[i] == 1)
        printf("esq\n");
    else
        printf("dir\n");
}

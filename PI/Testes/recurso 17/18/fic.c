

//1

char *mystrstr(char s1[], char s2[])
{
    int i = 0;
    int j = 0;
    int pos = 0;

    if (s2[j] == '\0')
    {
        return s1;
    }
    for (i; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[0])
            pos = i;
        if (s1[i] == s2[j])
        {
            j++;
        }
        if (s2[j] == '\0')
        {
            return (s1 + pos);
        }
    }
}

//2
void truncW(char t[], int n)
{
    int i = 0, j = 0, max = n;
    char aux[200];

    for (i; t[i] != '\0'; i++)
    {
        if (t[i] == ' ')
        {
            aux[j] = t[i];
            j++;
            max = n;
        }
        else
        {
            if (max > 0)
            {
                aux[j] = t[i];
                j++;
                max--;
            }
        }
    }
    aux[j] = '\0';
    strcpy(t, aux);
}

//3

int maiscentral(Posicao pos[], int N)
{
    float min = ((pos[0].x * pos[0].x) + (pos[0].y * pos[0].y));
    int indimin = 0, i = 1;
    for (i; i < N; i++)
    {
        if (((pos[i].x * pos[i].x) + (pos[i].y * pos[i].y)) < min)
        {
            min = ((pos[i].x * pos[i].x) + (pos[i].y * pos[i].y));
            indimin = i;
        }
    }
    return indimin;
}

//4;
LInt somasAcL(LInt l)
{
    LInt aux = l;
    LInt somas = NULL;
    LInt ant = NULL;
    LInt begin;
    int somatorio = 0, protect = 0;

    if (l == NULL)
        return somas;

    while (aux)
    {
        somas = malloc(sizeof(struct lligada));

        if (protect == 0)
            begin = somas;

        somatorio += aux->valor;

        somas->valor = somatorio;

        somas->prox = NULL;

        if (protect != 0)
            ant->prox = somas;

        ant = somas;
        protect++;
        aux = aux->prox;
    }
    return begin;
}

//5

int addOrd(ABin *a, int x)
{
    int flag = 0;
    while ((*a) != NULL && flag == 0)
    {
        if ((*a)->valor == x)
            flag = 1;
        else if ((*a)->valor > x)
            a = &((*a)->dir);
        else
            a = &((*a)->esq);
    }
    if ((*a) == NULL && flag == 0)
    {
        (*a) = malloc(sizeof(ABin));
        (*a)->valor = x;
        (*a)->esq = NULL;
        (*a)->dir = NULL;
    }
    return flag;
}

//GRUPO2

//1

int daPalavra(char *s, int *e)
{

    int flag = 0, i = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (isspace s[i] == 0)
        {
            break;
        }
    }

    for (i; s[i] != '\0' && isspace s[i] != 0; i++)
    {
        conta++;
    }

    *e = conta;
    return conta;
}
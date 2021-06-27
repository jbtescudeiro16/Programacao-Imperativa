
//1
char *mystrcpy(char *dest, char source[])
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        dest[i] = source[i];
    }
    dest[i] = '\0';
    return dest;
}

//2
void strnoV(char s[])
{
    int i = 0, j = 0;
    char aux[200];

    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
        }
        else
        {
            aux[j] = s[i];
            j++;
        }
    }
    aux[j] = '\0';
    strcpy(s, aux);
}
//3

int dumpAbin(ABin a, int v[], int N)
{
    if (!a || N < 0)
        return 0;

    int esq = dumpAbin(a->esq, v, N);
    if (esq < N)
    {
        v[esq] = a->valor;
        return 1 + esq + dumpAbin(a->dir, v + esq + 1, N - esq - 1);
    }
    else
        return N;
}

//4
int lookupAB(ABin a, int x)
{
    if (!a)
        return 0;
    if (a->valor == x)
        return 1;
    int esq = lookupAB(a->esq, x);
    int dir = lookupAB(a->dir, x);
    if (esq == 1 || dir == 1)
        return 1;
    else
        return 0;
}


void strrev(char s[])
{
    int i = 0, j = 0;
    char aux[200];
    strcpy(aux, s);
    j = strlen(aux) - 1;

    for (j; j >= 0; j--)
    {
        s[i] = aux[j];
        i++;
    }
    s[i] = '\0';
}
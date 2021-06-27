

void strrev(char s[])
{
    int i;
    int j = 0;
    char aux[200];
    i = strlen(s) - 1;

    for (i; i >= 0; i--)
    {
        aux[j] = s[i];
        j++;
    }
    aux[j] = '\0';

    strcpy(s, aux);
}
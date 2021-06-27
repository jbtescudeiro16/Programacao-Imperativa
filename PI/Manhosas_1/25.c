

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
    return strlen(aux);
}
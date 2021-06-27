

int limpaEspacos(char texto[])
{
    int i = 0, j = 0;
    char aux[200];
    for (i; texto[i] != '\0'; i++)
    {
        if (texto[i] == ' ' && texto[i + 1] != ' ')
        {
            aux[j] = texto[i];
            j++;
        }
        else if (texto[i] == ' ' && texto[i + 1] == ' ')
        {
        }
        else if (texto[i] != ' ')
        {
            aux[j] = texto[i];
            j++;
        }
    }
    aux[j] = '\0';
    strcpy(texto, aux);
    return j;
}
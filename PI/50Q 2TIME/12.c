

void strnoV(char s[])
{
    int i, j = 0\;
    char aux[200];

    for (i = 0; s[i] != '\0'; i++)
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
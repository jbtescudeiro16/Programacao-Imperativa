

int contafreq(char s[], char h)
{
    int i, conta = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == h)
        {
            conta++;
        }
    }
    return conta;
}

char charMaisfreq(char s[])
{
    int n = 0, max = 0, i;
    char maximizante;
    if (s[0] == '\0')
        return 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        n = contafreq(s, s[i]);
        if (n > max)
        {
            max = n;
            maximizante = s[i];
        }
    }
    return maximizante;
}

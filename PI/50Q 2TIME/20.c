

int contaPal(char s[])
{
    int i = 0, conta = 0;
    for (i; s[i] != '\0'; i++)
    {
        if ((s[i] != ' ' && s[i] != '\n') && (s[i + 1] == ' ' || s[i + 1] == '\0'))
        {
            conta++;
        }
    }
    return conta;
}


int difConsecutivos(char s[])
{
    int i = 0, max = 0, conta = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (s[i + 1] != s[i])
        {
            conta++;
        }
        else
        {
            if (conta > max)
                max = conta;
            conta = 0;
        }
    }
    return max;
}


int iguaisConsecutivos(char s[])
{
    int conta = 1, max = 0, i = 0;
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            conta++;
        }
        else
        {
            if (conta > max)
            {
                max = conta;
            }
            conta = 1;
        }
    }
    return max;
}
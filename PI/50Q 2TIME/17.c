
int maiorPrefixo(char s1[], char s2[])
{
    int conta = 0, i = 0, j = 0;
    while (s1[i] == s2[j] && s1)
    {
        j++;
        i++;
        conta++;
    }
    return conta;
}
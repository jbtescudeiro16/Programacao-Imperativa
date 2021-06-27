

int maiorSufixo(char s1[], char s2[])
{
    int i = strlen(s1) - 1, j = strlen(s2) - 1, conta = 0;
    while (s1[i] == s2[j])
    {
        conta++;
        i--;
        j--;
    }
    return conta;
}
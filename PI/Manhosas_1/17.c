

int maiorPrefixo(char s1[], char s2[])
{
    int i = 0;
    for (i; s1[i] == s2[i] && s1[i]; i++)
        ;
    return i;
}

int sufPref(char s1[], char s2[])
{
    int i = 0, j = 0, conta;
    for (i; s1[i]; i++)
    {
        if (s1[i] == s2[j++])
        {
            conta++;
        }
        else
        {
            conta = 0, j = 0;
        }
    }
    return conta;
}

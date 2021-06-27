

int palindroma(char s[])
{
    int meio = strlen(s) / 2, ret = 1, comp = strlen(s) - 1, i = 0;

    for (i; i < meio; i++)
    {
        if (s[i] == s[comp - i])
        {
            ret *= 1;
        }
        else
            return 0;
    }
    return ret;
}
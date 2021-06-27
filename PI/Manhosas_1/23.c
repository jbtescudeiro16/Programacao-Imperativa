

int palindorome(char s[])
{
    int i = 0, j = strlen(s) - 1, ret = 1;
    ;
    for (i; i < strlen(s) / 2; i++)
    {
        if (s[i] == s[j])
            ret *= 1;
        j--;
        else return 0;
    }
    return ret;
}
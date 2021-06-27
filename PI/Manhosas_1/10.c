

char *mystrstr(char s1[], char s2[])
{
    int i = 0, j = 0, pos = 0;
    if (s2[i] == '\0')
        return s1;
    for (i; s1[i]; i++)
    {
        if (s1[i] == s2[0])
            pos = i;
        if (s1[i] == s2[j])
            j++;
        if (s2[j] == '\0')
            return s1 + pos;
    }
}
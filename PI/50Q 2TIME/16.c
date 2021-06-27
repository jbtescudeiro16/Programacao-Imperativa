int difConsecutivos(char s[])
{
    int i, max = 0, n = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i + 1] != s[i])
        {
            n++;
        }
        else
        {
            if (n > max)
            {
                max = n;
                n = 0;
            }
        }
    }
    return max;
}
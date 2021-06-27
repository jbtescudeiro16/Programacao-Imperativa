

void truncW(char s[], int n)
{
    char aux[200];
    int i = 0;
    int j = 0;
    int reps = n;
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            aux[j] = s[i];
            reps = n;
            j++;
        }
        else
        {
            if (reps > 0)
            {
                aux[j] = s[i];
                reps--;
                j++;
            }
        }
    }
    aux[j] = '\0';
    strcpy(s, aux);
}
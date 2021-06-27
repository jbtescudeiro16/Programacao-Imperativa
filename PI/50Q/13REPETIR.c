#include <stdio.h>

void truncW(char t[], int n)
{
    int i = 0, j = 0, rep = n;
    char aux[200];
    for (i; t[i]; i++)
    {
        if (t[i] == ' ')
        {
            aux[j] = t[i];
            j++;
            rep = n;
        }
        else
        {
            if (rep > 0)
            {
                aux[j] = t[i];
                j++;
                rep--;
            }
        }
    }
    aux[j] = '\0';
    strcpy(t, aux);
}
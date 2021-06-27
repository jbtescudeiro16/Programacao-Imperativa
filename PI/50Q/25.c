#include <stdio.h>
#include <string.h>

int limpaEspacos(char t[])
{
    int i = 0, n = strlen(t), j = 0, len = 0;
    char s[100];
    for (i = 0; i < n; i++)
    {
        if (t[i] == ' ' && t[i + 1] != ' ')
        {
            {
                s[j] = ' ';
                j++;
            }
        }
        else if (t[i] == ' ' && t[i + 1] == ' ')
        {
        }
        else
        {
            s[j] = t[i];
            j++;
        }
    }
    s[j] = '\0';
    //printf("s nova:%s\n", s);
    strcpy(t, s);
    len = strlen(t);
    // printf(" len s nova:%d\n", len);
    return len;
}

void main()
{
    char s[20] = "Alberto  Joao";
    limpaEspacos(s);
}
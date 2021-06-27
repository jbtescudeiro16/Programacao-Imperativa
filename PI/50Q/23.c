#include <stdio.h>
#include <string.h>

int palindroma(char s[])
{
    int i = 0, len = 0, ret = 1;
    len = strlen(s);
    for (i; i != (len / 2); i++)
    {
        if (s[i] == s[len - 1 - i])
            ret *= 1;
        else
            ret *= 0;
    }
    printf("o ret é %d", ret);
    return ret;
}

int main()
{
    char s[15] = "conaanoc";
    palindroma(s);
}
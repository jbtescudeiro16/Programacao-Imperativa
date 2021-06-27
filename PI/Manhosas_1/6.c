#include <stdio.h>

void main()
{
    int num = 0, conta = 0;
    printf("insira o seu numero\n");
    scanf("%d", &num);
    while (num)
    {
        num = num / 10;
        conta++;
    }
    printf("%d\n", conta);
}
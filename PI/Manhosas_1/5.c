#include <stdio.h>

void main()
{
    int num = 0, conta = 0;
    printf("insira o seu numero\n");
    scanf("%d", &num);
    while (num)
    {
        if (num % 2 == 0)

            conta++;
        num = num / 2;
    }
    printf("%d\n", conta);
}
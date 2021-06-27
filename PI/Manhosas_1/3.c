#include <stdio.h>

void main()
{
    int aux = 0, maior = 0, segmaior = 0;

    printf("Insira um inteiro \n");
    scanf("%d", &aux);
    maior = aux;
    while (aux != 0)
    {
        printf("Insira um inteiro \n");
        scanf("%d", &aux);
        if (aux > maior)
        {
            segmaior = maior;
            maior = aux;
        }
        else if (aux > segmaior)
        {
            segmaior = aux;
        }
    }
    printf("o seg maior  foi :%d \n", segmaior);
}
#include <stdio.h>

void main()
{
    int soma = 0, aux = 0, conta = 0;

    printf("Insira um inteiro \n");
    scanf("%d", &aux);
    soma += aux;
    while (aux != 0)
    {
        printf("Insira um inteiro \n");
        scanf("%d", &aux);
        soma += aux;
        conta++;
    }
    printf("a media  foi :%f \n", (float)soma / conta);
}
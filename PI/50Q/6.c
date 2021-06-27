#include <stdio.h>

int qDig(unsigned int n)
{
    int contador = 0;
    while (n != 0)
    {
        n /= 10;
        contador++;
    }
    return contador;
}

int main()
{
    int n, a;
    scanf("%d", &n);
    a = qDig(n);
    printf("O número de digitos necessários são : %d \n", a);
    return 0;
}
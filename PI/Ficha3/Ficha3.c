#include <stdio.h>

//1.A
/*
int main()
{
    int x[15] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10,
                 11, 12, 13, 14, 15};
    int *y, *z, i;
    y = x;
    z = x + 3;
    for (i = 0; i < 5; i++)
    {
        printf("%d %d %d\n",
               x[i], *y, *z);
        y = y + 1;
        z = z + 2;
    }

    DEVOLVE :
    1 1 4
    2 2 6
    3 3 8
    4 4 10 
    5 5 12  

//1.b

int main()
{
    int i, j, *a, *b;
    i = 3;
    j = 5;
    a = b = 42;
    a = &i;
    b = &j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf("%d\n", j);
    return 0;
}
Resultado 13

 */

//2
/*
void swapM(int *x, int *y)
{

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("O novo valor de x é %d e o de y é %d \n", *x, *y);
}


int main()
{
    int x, y;
    printf("Introduza dois valores reais \n");
    scanf("%d %d", &x, &y);
    swapM(&x, &y);
    return 0;
}

//3

void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main()
{
    int v, x, y, i;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("Introduza as posições que ver trocada entre 1 e 10 \n");
    scanf("%d %d", &x, &y);
    swap(vet, x, y);
    for (i = 0; i <= 9; i++)
    {
        printf("%d", vet[i]);
    }
    printf("\n");
    return 0;
}

//4

int soma(int v[], int N)
{
    int i = 0, soma = 0;
    for (i; i < N; i++)
    {
        soma += v[i];
    }

    return soma;
}

int main()
{
    int a = 0;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    a = soma(vet, 10);
    printf("%d\n", a);
    return 0;
}



//5

void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void inverteArray(int v[], int N)
{
    int i = 0;
    for (i; i < N / 2; i++)
    {
        swap(v, i, N - 1 - i);
    }
}

int main()
{
    int i;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    inverteArray(vet, 10);
    for (i = 0; i <= 9; i++)
    {
        printf("%d", vet[i]);
    }
    printf("\n");
    return 0;
}

//6

int maximum(int v[], int N, int *m)
{
    int i = 0;
    for (i; i < N; i++)
    {
        if (*m < v[i])
        {
            *m = v[i];
        }
    }
    return 0;
}

int main()
{
    int m = 0;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    maximum(vet, 10, &m);
    printf("%d", m);
    printf("\n");
    return 0;
}


//7
 
void quadrados(int q[], int N)
{
    int i = 0;
    for (i; i < N - 1; i++)
    {
        {
            q[i + 1] = i * i + (2 * i + 1);
        }
    }
    q[0] = 0;
}

int main()
{
    int i;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    quadrados(vet, 10);
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}


Falta a pergunta 8
*/
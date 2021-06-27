#include <stdio.h>
/*
//1


float multInt1(int n, float m)
{
    float contador = 0.0;
    while (n != 0)
    {
        contador += m;
        n--;
    }
    return contador;
}

void main()
{
    int n;
    float m, a;
    scanf("%d", &n);
    scanf("%f", &m);
    a = multInt1(n, m);
    printf("%.2f\n", a);
}


//2

float multInt2(int n, float m)
{
    float acumulador = 0.0;
    while (n >= 1)
    {

        if (n % 2 != 0)
        {
            acumulador += m;
        }
        n /= 2;
        m *= 2;
    }
    return acumulador;
}

void main()
{

    int n;
    float m, a;
    scanf("%d", &n);
    scanf("%f", &m);
    a = multInt2(n, m);
    printf("%.2f\n", a);
}


//3

int mdc1(int a, int b)
{
    int c, i, resposta = 0;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    for (int i = b; i >= 1; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            if (resposta <= i)
            {
                resposta = i;
            }
        }
    }
    return resposta;
}

void main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = mdc1(a, b);
    printf("%d\n", c);
}


//4

int mdc2(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a < b)
        {
            b = b - a;
        }
        else if (a > b)
        {
            a = a - b;
        }
        else
            return a;
    }
    if (a == 0)
        return b;
    else
        return a;
}

void main()
{
    int a = 0, b = 0, c = 0;
    printf("Insira dois números inteiros\n");
    scanf("%d %d", &a, &b);
    c = mdc2(a, b);
    printf("%d\n", c);
}


// 5

int mdc3(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a < b)
        {
            b = b % a;
        }
        else if (a > b)
        {
            a = a % b;
        }
        else
            return a;
    }
    if (a == 0)
        return b;
    else
        return a;
}

void main()
{
    int a = 0, b = 0, c = 0;
    printf("Insira dois números inteiros\n");
    scanf("%d %d", &a, &b);
    c = mdc3(a, b);
    printf("%d\n", c);
}

//6.a

int fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n = 0, a;
    printf("Insira o número para o qual pretende saber a sequencia de fibbonacii\n");
    scanf("%d", &n);
    a = fib(n);
    printf("0 resultado é : %d \n", a);
}
*/

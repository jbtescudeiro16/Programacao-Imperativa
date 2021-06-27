#include <stdio.h>

Aluno Turma1[7] = {{4444, "André", {2, 1, 0, 2, 2, 2}, 10.5}, {3333, "Paulo", {0, 0, 2, 2, 2, 1}, 8.7}, {8888, "Carla", {2, 1, 2, 1, 0, 1}, 14.5}, {2222, "Joana", {2, 0, 2, 1, 0, 2}, 3.5}, {7777, "Maria", {2, 2, 2, 2, 2, 1}, 5.5}, {6666, "Bruna", {2, 2, 2, 1, 0, 0}, 12.5}, {5555, "Diogo", {2, 2, 1, 1, 1, 0}, 8.5}};

typedef struct aluno
{
    int numero;
    char nome[100];
    int miniT[6];
    float teste;
} Aluno;

float nota(Aluno a)
{
    int i = 0;
    float s = 0.0;
    for (i = 0; i < 6; i++)
    {
        s += a.miniT[i] * 10;
    }
    if (s / 6 < 8 || a.teste < 8)
        printf("JF");
    else
    {
        s = s / 6 * 0.3 + a.teste * 0.7;
        printf("Atua nota foi esta %f", s);
    }
    return s;
}

int procuraNum(int num, Aluno t[], int N)
{
    int i = 0;
    for (i; i < N; i++)
    {
        if (t[i].numero == num)
            return i;
    }
    return -1;
}
void ordenaPorNum(Aluno t[], int N)
{
    {
        int i = 0;
        Aluno aux;
        for (i; i < N - 1; i++)
        {
            insere(t[i], t, N);
        }
    }
}

void insere(Aluno j, Aluno t[], int N)
{
    int i = 0, n = 0;
    Aluno v[N];
    for (i = 0; i < N; i++)
    {
        v[i] = t[i];
    }
    for (i; i < N; i++)
    {
        if (j.numero <= v[n + 1].numero)
        {
            v[n] = j;
            n++;
        }
        else if (j.numero > v[n].numero)
        {
            n++;
        }
    }
    for (i = 0; i < N; i++)
    {
        t[i] = v[i];
    }
}
#include <stdio.h>

//testado no codeboard

typedef enum movimento
{
    Norte,
    Oeste,
    Sul,
    Este
} Movimento;
typedef struct posicao
{
    int x, y;
} Posicao;

Posicao posFinal(Posicao inicial, Movimento mov[], int N)
{
    int i = 0;
    for (i; i < N; i++)
    {
        if (mov[i] == Norte)
            inicial.y++;
        else if (mov[i] == Sul)
            inicial.y--;
        else if (mov[i] == Este)
            inicial.x++;
        else
            inicial.x--;
    }
    return inicial;
}
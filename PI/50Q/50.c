#include <stdio.h>
#include <math.h>

typedef struct posicao
{
    int x, y;
} Posicao;

//testado no codeboard.

int vizinhos(Posicao p, Posicao pos[], int N)
{
    int contador = 0, i = 0;
    for (i; i < N; i++)
    {
        if ((pos[i].x == p.x) && (pos[i].y == p.y))
        {
            contador += 0;
        }
        else if ((pos[i].x == p.x) && (pos[i].y != p.y))
        {
            if ((abs((pos[i].y - p.y))) <= 1)
                contador++;
        }
        else if ((pos[i].x != p.x) && (pos[i].y == p.y))
        {
            if ((abs((pos[i].x - p.x))) <= 1)
                contador++;
        }
    }
    return contador;
}
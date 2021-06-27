#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void initQueue(Queue *q)
{
    (*q).inicio = NULL;
    (*q).fim = NULL;
}
int QisEmpty(Queue q)
{
    return q.inicio ? 0 : 1;
}
int enqueue(Queue *q, int x)
{
    int r = 0;
    LInt aux = (*q).fim;
    if (aux)
    {
        aux->prox = newLInt(aux->prox, x);
        if (aux->prox != NULL)
            (*q).fim = aux->prox;
        else
            r = 1;
    }
    return r;
}

//inacabada
int dequeue(Queue *q, int *x)
{
    int r = 0;
    if (QisEmpty(*Q))
        r = 1;
    else
    {
        *x = (*q).inicio->valor;
        aux = (*q).inicio;
        (*q).inicio
    }
    return -1;
}
int frontQ(Queue q, int *x)
{
    return -1;
}

typedef LInt QueueC;

void initQueueC(QueueC *q);
int QisEmptyC(QueueC q)
{
    return -1;
}
int enqueueC(QueueC *q, int x)
{
    return -1;
}
int dequeueC(QueueC *q, int *x)
{
    return -1;
}
int frontC(QueueC q, int *x)
{
    return -1;
}
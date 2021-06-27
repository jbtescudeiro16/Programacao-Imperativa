#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

// Static stacks

void SinitStack(SStack s)
{
    s->sp = 0; //*s.sp=0 (é o mesmo)
}

int SisEmpty(SStack s)
{
    return s->sp == 0; //(se a stack for vazia)
}

int Spush(SStack s, int x)
{
    int r = 0;
    if ((s->sp) == Max)
        r = 1;
    else
    {
        s->values[s->sp] = x;
        s->sp++;
    }
    return r;
}

int Spop(SStack s, int *x)
{
    int r = 0;
    if (SisEmpty(s))
        r = 1;
    else
    {
        s->sp--;
        *x = s->values[s->sp];
    }

    return r;
}

int Stop(SStack s, int *x)
{
    int r = 0;
    if (SisEmpty(s))
        r = 1;
    else
    {
        *x = s->values[s->sp - 1];
    }

    return r;
}

//a partir do ex2

// Static queues

void SinitQueue(SQueue q)
{
    q->length = 0;
    q->front = 0;
}

int SisEmptyQ(SQueue q)
{
    return q->length == 0;
}

int Senqueue(SQueue q, int x)
{
    int r = 0;
    if (q->length == Max)
        r = 1;
    else
    {
        q->values[(q->front + q->length) % Max] = x;
        q->length++;
    }
    return r;
}

int Sdequeue(SQueue q, int *x)
{
    int r = 0;
    if (SisEmptyQ(q))
        r = 1;
    else
    {
        *x = q->values[q->front];
        q->length--;
        q->front = (q->front + 1) % Max;
    }
    return r;
}

int Sfront(SQueue q, int *x)
{
    int r = 0;
    if (SisEmptyQ(q))
        r = 1;
    else
    {
        *x = q->values[q->front];
    }

    return (-1);
}

void ShowSQueue(SQueue q)
{
    int i, p;
    printf("%d Items: ", q->length);
    for (i = 0, p = q->front; i < q->length; i++)
    {
        printf("%d ", q->values[p]);
        p = (p + 1) % Max;
    }
    putchar('\n');
}

// Queues with dynamic arrays

int dupQueue(DQueue q)
{
    // ...
    return (-1);
}

void DinitQueue(DQueue q)
{
    // ...
}

int DisEmptyQ(DQueue s)
{
    return (-1);
}

int Denqueue(DQueue q, int x)
{
    // ...
    return (-1);
}

int Ddequeue(DQueue q, int *x)
{
    // ...
    return (-1);
}

int Dfront(DQueue q, int *x)
{
    // ...
    return (-1);
}

void ShowDQueue(DQueue q)
{
    int i, p;
    printf("%d Items: ", q->length);
    for (i = 0, p = q->front; i < q->length; i++)
    {
        printf("%d ", q->values[p]);
        p = (p + 1) % q->size;
    }
    putchar('\n');
}

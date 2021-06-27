#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void initStack(Stack *s)
{
    *s = NULL;
}
int SisEmpty(Stack s)
{
    return s ? 1 : 0;
}
int push(Stack *s, int x)
{
    int r = 0;
    Stack s1 = newLInt(x, *s);
    if (s1)
    {
        *s = s1;
    }
    else
        r = 1;

    return r;
}
int pop(Stack *s, int *x)
{
    int r = 0;
    Stack aux;
    if (!SisEmpty(*s))
    {
        *x = (*s)->valor;
        aux = *s;
        *s = (*s)->prox;
    }
    else
        r = 1;
    return r;
}
int top(Stack s, int *x)
{
    int r = 0;
    if (!SisEmpty(s))
    {
        *x = s->valor;
    }
    else
        r = 1;
    return r;
}
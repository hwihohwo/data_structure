#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int max;
    int l_ptr;
    int r_ptr;
    int *stk;
} IntStack;

int Initialize(IntStack *s, int max)
{
    s->l_ptr = 0;
    s->r_ptr = 0;
    if((s->stk = calloc(max, sizeof(int))) == NULL)
    {
        s->max = 0;
        return (-1);
    }
    s->max = max;
    return (0);
}

int Push_l(IntStack *s, int x)
{
    if(s->l_ptr + s->r_ptr >= s->max)
        return (-1);
    s->stk[s->l_ptr++] = x;
    return (0);
}

int Push_r(IntStack *s, int x)
{
    if(s->l_ptr + s->r_ptr >= s->max)
        return (-1);
    s->stk[s->max - 1 - s->r_ptr++] = x;
    return (0);
}

int Pop(IntStack *s, int *x)
{
    if(s->ptr <= 0)
        return (-1);
    *x = s->stk[--s->ptr];
    return (0);
}

int Peek(const IntStack *s, int *x)
{
    if(s->ptr <= 0)
        return (-1);
    *x = s->stk[s->ptr - 1];
    return (0);
}

void Clear(IntStack *s)
{
    s->ptr = 0;
}

int Capacity(const IntStack *s)
{
    return (s->max);
}

int Size(const IntStack *s)
{
    return (s->ptr);
}

int IsEmpty(const IntStack *s)
{
    return (s->ptr <= 0);
}

int IsFull(const IntStack *s)
{
    return (s->ptr >= s->max);
}

int Search(const IntStack *s, int x)
{
    int i;
    for(i = s->ptr - 1; i >= 0; i--)
    {
        if(s->stk[i] == x)
            return (i);
    }
    return (-1);
}

void Print(const IntStack *s)
{
    int i;
    for(i = 0; i < s->ptr; i++)
        printf("%d ", s->stk[i]);
    putchar('\n');
}

void Terminate(IntStack *s)
{
    if(s->stk != NULL)
        free(s->stk);
    s->max = s->ptr = 0;
}
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

int Pop_l(IntStack *s, int *x)
{
    if(s->l_ptr <= 0)
        return (-1);
    *x = s->stk[--s->l_ptr];
    return (0);
}

int Pop_r(IntStack *s, int *x)
{
    if(s->r_ptr <= 0)
        return (-1);
    *x = s->stk[--s->r_ptr];
    return (0);
}

int Peek_l(const IntStack *s, int *x)
{
    if(s->l_ptr <= 0)
        return (-1);
    *x = s->stk[s->l_ptr - 1];
    return (0);
}

int Peek_r(const IntStack *s, int *x)
{
    if(s->r_ptr <= 0)
        return (-1);
    *x = s->stk[s->max - s->r_ptr];
    return (0);
}

void Clear(IntStack *s)
{
    s->l_ptr = 0;
    s->r_ptr = 0;
}

int Capacity(const IntStack *s)
{
    return (s->max);
}

int Size_l(const IntStack *s)
{
    return (s->l_ptr);
}

int Size_r(const IntStack *s)
{
    return (s->r_ptr);
}

int IsEmpty_l(const IntStack *s)
{
    return (s->l_ptr <= 0);
}

int IsEmpty_r(const IntStack *s)
{
    return (s->r_ptr <= 0);
}


int IsFull_l(const IntStack *s)
{
    return (s->l_ptr >= s->max);
}

int IsFull_r(const IntStack *s)
{
    return (s->r_ptr >= s->max);
}


int Search(const IntStack *s, int x)
{
    int i;
    for(i = s->l_ptr - 1; i >= 0; i--)
    {
        if(s->stk[i] == x)
            return (i);
    }
    for(i = s->max - s->r_ptr; i < s->max; i++)
    {
        if(s->stk[i] == x)
            return (i);
    }
    return (-1);
}

void Print_l(const IntStack *s)
{
    int i;
    for(i = 0; i < s->l_ptr; i++)
        printf("%d ", s->stk[i]);
    putchar('\n');
}

void Print_r(const IntStack *s)
{
    int i;
    for(i = s->max - s->r_ptr; i < s->max; i++)
        printf("%d ", s->stk[i]);
    putchar('\n');
}

void Terminate(IntStack *s)
{
    if(s->stk != NULL)
        free(s->stk);
    s->max = s->l_ptr = s->r_ptr = 0;
}
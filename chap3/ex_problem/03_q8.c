#include <stdio.h>
#include <stdlib.h>

int compar(const int *a, const int *b)
{
    if (*a > *b)
        return (1);
    else if (*a < *b)
        return (-1);
    else
        return (0);
}

void    *binsearch(const void *key, const void *base, size_t nmeb, size_t size, int(*compar)(const void *, const void *))
{
    char *pl, *pr;
    char *pc;
    char *ky;

    ky = (char *)key;
    pl = (char *)base;
    pr = (char *)(base + size * (nmeb - 1));
    do {
        pc = pl + (((pr - pl) / nmeb) / 2) * size;
        if (compar(pc, ky) == 0)
            return (pc);
        else if (compar(pc, ky) > 0)
            pr = pc - size;
        else
            pl = pc + size;
    } while(pl <= pr);

    return (NULL);
}

int main(void)
{
    int nx, ky;
    int *x, *ret;
    int i;

    puts("이진 탐색");
    puts("요소 갯수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for (i = 1; i < nx; i++)
    {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while (x[i - 1] > x[i]);
    }

    puts("검색할 값 : ");
    scanf("%d", &ky);
    ret = binsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *))compar);
    if (ret == NULL)
        puts("값을 찾지 못했습니다.");
    else
        printf("%d은(는) x[%d]에 있습니다.\n", ky, (int)(ret - x));

    free(x);
    return (0);
}
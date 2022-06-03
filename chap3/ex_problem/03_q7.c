#include <stdio.h>
#include <stdlib.h>

int comp(const int *a, const int *b)
{
    if (*a > *b)
        return (1);
    else if (*a < *b)
        return (-1);
    else
        return (0);
}

void    *seqsearch(const void *key, const void *base, size_t nmeb, size_t size, int(*compar)(const void *, const void *))
{
    size_t i;

    i = 0;
    for (i = 0; i < nmeb; i++)
        {
            if (compar(key, (base + size * i)) == 0)
                return (char *)(base + size * i);
        }
    
    return (NULL);
}

int main(void)
{
    int nx, ky;
    int *x, *num;
    int i;

    puts("요소 검색");
    puts("요소 갯수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    for (i = 0; i < nx; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    puts("검색할 값");
    scanf("%d", &ky);
    num = bsearch(&ky, x, nx, sizeof(int), (int(*)(const void *, const void *)) comp);
    if (num == NULL)
        puts("검색에 실패했습니다.");
    else
            printf("%d은 x[%d]에 있습니다.\n", ky, (int)(num - x));

    return (0);   
}
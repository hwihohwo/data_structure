#include <stdio.h>
#include <stdlib.h>

int rcmp(const long *a, const long *b)
{
    if (*a > *b)
        return (-1);
    else if (*a < *b)
        return (1);
    else
        return (0);
}

int main(void)
{
    int nx;
    long ky;
    long *x, *num;
    int i;

    puts("요소 검색");
    puts("요소 갯수 : ");
    scanf("%d", &nx);
    printf("x[0] : ");
    scanf("%ld", &x[0]);
    for (i = 1; i < nx; i++)
    {
        do {
        printf("x[%d] : ", i);
        scanf("%ld", &x[i]);
        } while (x[i - 1] < x[i]);
    }

    puts("검색할 값");
    scanf("%ld", &ky);
    num = bsearch(&ky, x, nx, sizeof(long), (int(*)(const void *, const void *)) rcmp);
    if (num == NULL)
        puts("검색에 실패했습니다.");
    else
            printf("%ld은 x[%d]에 있습니다.\n", ky, (int)(num - x));

    return (0);   
}
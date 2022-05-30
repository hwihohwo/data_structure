#include <stdio.h>
#include <stdlib.h>

int	search_idx(const int a[], int n, int key, int idx[])
{
	int	count, i;

	count = 0;
	for (i = 0; i < n; i++)
		if (a[i] == key)
		{
			idx[count] = i;
			count++;
		}
	return (count);
}

int	main(void)
{
	int	nx, ky;
	int	num;
	int	*a;
	int	*idx;

	puts("요소 검색");
	printf("요소 갯수\n");
	scanf("%d", &nx);
	a = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	puts("검색할 값");
	scanf("%d", &ky);
	num = search_idx(a, nx, ky, idx);
	printf("찾은 갯수 : %d\n", num);
	for (int i = 0; i < num; i++)
		printf("key의 idx : %d\n", idx[i]);

	return (0);
}

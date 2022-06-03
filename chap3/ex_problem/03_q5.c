#include <stdio.h>
#include <stdlib.h>

int	bin_search2(const int a[], int n, int key)
{
	int	pl, pr, pc;
	int	ret;

	pl = 0;
	pr = n - 1;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)
		{
			ret = pc;
			while (pc >= 0)
			{
				if (a[pc] == key)
					ret = pc;
				pc--;
			}
			return (ret);
		}
		else if (a[pc] > key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return (-1);
}

int	main(void)
{
	int	nx, ky;
	int	num;
	int	*x;

	puts("이진 탐색");
	puts("요소 갯수");
	scanf("%d", &nx);
	x = malloc(nx * sizeof(int));
	if (x == NULL)
		exit(1);
	for (int i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	puts("검색할 값");
	scanf("%d", &ky);
	num = bin_search2(x, nx, ky);
	if (num == -1)
		puts("결과를 찾지 못했습니다.\n");
	else
		printf("%d의 맨앞 요소는 x[%d]에 있습니다.\n", ky, num);

	return (0);
}

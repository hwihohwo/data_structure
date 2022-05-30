#include <stdio.h>
#include <stdlib.h>

int	bin_search(const int a[], int n, int ky)
{
	int	pl, pr, pc;
	int	i, j;

	pl = 0;
	pr = n - 1;
	printf("   |");
	for (int i = 0; i < n; i++)
		printf("%3d", i);
	putchar('\n');
	printf("---+");
	for (int i = 0; i < n; i++)
		printf("---");
	putchar('\n');
	while(pl <= pr)
	{
		pc = (pl + pr) / 2;
		printf("   |");
		for (int j = 0; j < n; j++)
		{
			if (j == pc)
				printf("  +");
			else if (j == pl)
				printf(" <-");
			else if (j == pr)
				printf(" ->");
			if (j != pl && j != pr && j!= pc)		
				printf("   ");
		}
		putchar('\n');
		printf("%3d|", pc);
		for (int j = 0; j < n; j++)
			printf("%3d", a[j]);
		putchar('\n');
		if (ky == a[pc])
			return (pc);
		else if (ky > a[pc])
			pl = pc + 1;
		else
			pr = pc - 1;
		printf("   |\n");
	}
return (-1);
}

int	main(void)
{
	int ret, nx, ky;
	int *a;

	puts("이진 탐색");
	puts("요소 갯수");
	scanf("%d", &nx);
	a = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("검색할 값 : ");
	scanf("%d", &ky);
	ret = bin_search(a, nx, ky);
	if (ret == -1)
		puts("검색한 값이 존재하지 않습니다.\n");
	else
		printf("%d는 a[%d]에 있습니다.\n", ky, ret);

	return (0);
}

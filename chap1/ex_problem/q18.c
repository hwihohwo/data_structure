#include <stdio.h>

void	nrpira(int n)
{
	int	i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			putchar(' ');
		for (j = 1; j <= (2 * n) + 1 - (2 * i); j++)
			printf("%d", i % 10);
		putchar('\n');
	}
}

int	main(void)
{
	nrpira(22);

	return (0);
}

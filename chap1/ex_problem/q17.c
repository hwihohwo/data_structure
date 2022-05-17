#include <stdio.h>

void	spira(int n)
{
	int	i, j;
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			putchar(' ');
		for (j = 1; j <= (i - 1) * 2 + 1; j++)
			putchar('*');
		for (j = 1; j <= n - i; j++)
			putchar(' ');
		putchar('\n');
	}
}

int	main(void)
{
	spira(10);

	return (0);
}

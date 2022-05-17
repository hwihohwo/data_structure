#include <stdio.h>

void	triangleLB(int n)
{
	int	i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
}

void	triangleLU(int n)
{
	int	i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - (i - 1); j++)
			putchar('*');
		putchar('\n');
	}
}

void	triangleRU(int n)
{
	int	i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			putchar(' ');
		for (; j <= n; j++)
			putchar('*');
		putchar('\n');
	}
}

void	triangleRB(int n)
{
	int	i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			putchar(' ');
		for (; j <= n; j++)
			putchar('*');
		putchar('\n');
	}
}

int	main(void)
{
	int	n;

	n = 5;
	triangleLB(n);
	triangleLU(n);
	triangleRU(n);
	triangleRB(n);

	return (0);
}

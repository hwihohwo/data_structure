#include <stdio.h>

void	ary_copy(int a[], const int b[], int n)
{
	int	i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int	main(void)
{
	int	a[5];
	int	b[5] = {1, 2, 3, 4, 5};

	ary_copy(a, b, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);

	return (0);
}

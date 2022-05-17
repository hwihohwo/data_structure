#include <stdio.h>

void	ary_rcopy(int a[], const int b[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = b[n - i - 1];
}

int	main(void)
{
	int	a[6];
	int	b[6] = {1, 2, 3, 4, 5, 6};

	ary_rcopy(a, b, 6);
	for (int i = 0; i < 6; i++)
		printf("%d ", a[i]);

	return (0);
}

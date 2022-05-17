#include <stdio.h>

int	sumof(int a, int b)
{
	int	max;
	int	min;
	int	sum;

	sum = 0;
	if (a >= b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	while (min <= max)
	{
		sum += min;
		min++;
	}
	return (sum);
}

int	main(void)
{
	printf("%d\n", sumof(6, 4));
	return (0);
}

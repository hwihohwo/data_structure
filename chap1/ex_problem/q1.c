#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max;

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	return (max);
}

int main(void)
{
	printf("%d\n", max4(1, 3, 5, 6));
	return (0);
}

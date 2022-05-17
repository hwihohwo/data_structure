int	min4(int a, int b, int c, int d)
{
	int min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	if (min > d)
		min = d;
	return (min);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", min4(234234, -123423, 23423434, 0));
	return (0);
}

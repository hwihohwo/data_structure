int min3(int a, int b, int c)
{
	int min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", min3(-23, 0, 23));
	return (0);
}

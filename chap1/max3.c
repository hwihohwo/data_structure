#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;
	printf("find max value among three integers.\n");
	printf("a's value : "); scanf("%d", &a);
	printf("b's value : "); scanf("%d", &b);
	printf("c's value : "); scanf("%d", &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	printf("max value is %d.\n", max);

	return (0);
}

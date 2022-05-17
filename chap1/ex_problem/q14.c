#include <stdio.h>

int	main(void)
{
	int	i, j;
	int	n;

	printf("사각형을 출력합니다.\n");
	printf("입력할 수 : "); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			putchar('*');
		putchar('\n');
	}

	return (0);
}

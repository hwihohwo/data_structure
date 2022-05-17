#include <stdio.h>

int	main(void)
{
	int	i, j;
	int	width, height;

	printf("직사각형을 출력합니다.\n");
	do {
	printf("높이 : "); scanf("%d", &height);
	} while (height <= 0);
	do {
	printf("너비 : "); scanf("%d", &width);
	} while (width <= 0);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			putchar('*');
		putchar('\n');
	}

	return (0);
}

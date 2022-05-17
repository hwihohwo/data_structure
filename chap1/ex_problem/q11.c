#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;

	i = 0;
	do {
		printf("양의 정수를 입력하세요. : ");
		scanf("%d", &n);
	}	while (n <= 0);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	printf("그 수는 %d자리 입니다.\n", i);
	return (0);
}

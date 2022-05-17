#include <stdio.h>

int	main(void)
{
	int	n;

	printf("n의 값을 입력하세요.\n");
	scanf("%d", &n);
	printf("합 : %d\n", (n * (n + 1)) / 2);
	return (0);
}

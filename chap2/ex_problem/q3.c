#include <stdio.h>
#include <stdlib.h>

double	aveof(const int a[], int n)
{
	int	i;
	double ave;

	ave = 0.0;
	for(i = 0; i < n; i++)
		ave += (double)a[i];
	ave /= (double)n;
	return (ave);
}

int	main(void)
{
	int	i;
	int	*height;
	int	number;
	printf("사람수 : ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++)
	{
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}
	printf("키의 평균은 %lf입니다.\n", aveof(height, number));
	free(height);

	return (0);
}

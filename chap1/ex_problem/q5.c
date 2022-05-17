#include <stdio.h>

int	med3(int a, int b, int c)
{
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return (a);
	else if ((a > b && c < b) || (c > b && a < b))
		return (b);
	else
		return (c);
}

int	main(void)
{
	int	a;
	int	b;
	int	c;

	printf("세 정수를 입력하세요.\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("med : %d\n", med3(a, b, c));
	return (0);
}
/*
   효율이 떨어지는 이유에 대해서
   빨리 끝낼 수 있는 경우에 대해서도 if문에 있는 조건들을 
   모두 연산을 해야하기 때문에 평균적인 연산횟수가 늘어나기 때문(?)
   */

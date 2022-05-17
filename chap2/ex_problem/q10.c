#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	shuffle(int a[], int n)
{
	int	temp;
	int	rand_num;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		rand_num = rand() % n;
		temp = a[i];
		a[i] = a[rand_num];
		a[rand_num] = temp;
	}
}

int	main(void)
{
	int	a[6] = {1, 2, 3, 4, 5, 6};

	shuffle(a, 6);
	for (int i = 0; i < 6; i++)
		printf("%d ", a[i]);

	return (0);
}

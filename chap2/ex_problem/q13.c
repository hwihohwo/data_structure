#include <stdio.h>

typedef	struct {
	int	y;
	int	m;
	int	d;
}	Date;

Date	Dateof(int y, int m, int d)
{
	Date	ret;

	ret.y = y;
	ret.m = m;
	ret.d = d;

	return (ret);
}

Date	After(Date x, int n)
{
	

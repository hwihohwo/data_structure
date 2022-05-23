#include <stdio.h>

typedef	struct {
	int	y;
	int	m;
	int	d;
}	Date;

Date Before(Date x, int n);
Date After(Date x, int n);

static int mdays[2][12] = {
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

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
	if (n < 0)
		return Before(x, -n);

	x.d += n;

	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
		x.d -= mdays[isleap(x.y)][x.m - 1];
		if (++x.m > 12) {
			x.y++;
			x.m = 1;
		}
	}
	return (x);
}

Date	Before(Date x, int n)
{
	if (n < 0)
		return After(x, -n);

	x.d -= n;

	while (x.d < 1) {
		if (--x.m < 1) {
			x.y--;
			x.m = 12;
		}
		x.d += mdays[isleap(x.y)][x.m - 1];
	}
	return (x);
}

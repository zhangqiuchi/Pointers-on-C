#include <stdio.h>

int negate(int a)
{
	if (a > 0 || a < 0)
		a *= -1;
	return a;
}

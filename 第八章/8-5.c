#include <stdio.h>
void
matrix_multiply(int *m1, int *m2, int *r,
		int x, int y, int z)
{
	for (int i = 0; i < x; i ++)
	{
		for (int j = 0; j < z; j ++)
		{
			for (int k = 0; k < y; k ++)
			{
				int *p = m1 + (i * y) + k;
				int *q = m2 + (k * z) + j;
				int *qp = r + (i * z) + j;
				*qp += *q * *p;
			}
		}
	}

	
}


int main(void)
{
	int m1[3][2] = {{2, -6},{3, 5},{1, -1}};
	int m2[2][4] = {{4, -2, -4, -5},{-7, -3, 6, 7}};
	int r[3][4] = {0};
	matrix_multiply(m1, m2, r, 3, 2, 4);
	
	for (int i = 0; i < 3; i ++)
	{
		for (int j = 0; j < 4; j ++)
		{
			printf("%5d", r[i][j]);
		}
		printf("\n");
	}
	return 0;

}

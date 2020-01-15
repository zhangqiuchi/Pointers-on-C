#include <stdio.h>

#define true 1
#define false 0
#define MAX 1000

void Eratosthenes(char a[], int b)
{
	for (int i = 0; i < b; i ++)
		*(a+i) = 1;
	 *(a+0) = 0;
	 *(a+1) = 0;

	 int i = 2;
	 int j;

	 while (i < b)
	 {
	 	j = i;

		while ((j += i) < b)
			*(a+j) = false;
		i ++;	
	 }
}

int main(void)
{
	char a[MAX];
		
	Eratosthenes(a, MAX);

	for (int i =0; i < MAX; i ++)
		if (a[i] == 1)
			printf("%5d", i);

	return 0;
}

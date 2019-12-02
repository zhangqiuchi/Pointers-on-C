#include <stdio.h>
#include <string.h>
#define MAX_LINE 128
#define MAX_COLS 128

int main()
{
	char a[MAX_LINE][MAX_COLS] = {0};
	char b[MAX_LINE][MAX_COLS] = {0};
	int i = 0, j = 0;
	while (gets(a[i]) != NULL)
		i ++;
	for (int k = 0; k < i; k ++)
		if (strcmp(a[k],a[k+1]) == 0)
		{
			if (strcmp(b[j-1],a[k])!= 0)
			{
				strcpy(b[j],a[k]);
				j ++;
			}
		}
	for (int k = 0;k < j; k ++)
		printf("%s\n", b[k]);
	return 0;
}

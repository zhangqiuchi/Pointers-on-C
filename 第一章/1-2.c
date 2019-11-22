#include <stdio.h>
#include <stdlib.h>

int main()
{
	int line = 0;
	char ch;
	int check = 1;

	while ((ch = getchar()) != EOF)
	{
		if (check == 1)
		{
			line += 1;
			printf("%d", line);
			check = 0;
		}
		putchar(ch);
		if (ch == '\n')
			check = 1;
	}

	return 0;
}

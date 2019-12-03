#include <stdio.h>

int main()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 91)
			ch = ch + 32;
		putchar(ch);
	}
	return 0;
}

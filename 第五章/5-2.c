#include <stdio.h>

int main()
{
	char ch;
	while((ch = getchar()) != EOF)
	{
		if ((ch >= 97 && ch <= 123) ||
	        	(ch >= 65 && ch <= 91))
		{
			ch = ch + 13;
			if (ch > 123)
				ch = (ch-123) + 97;
			if (ch > 91)
				ch = (ch - 91) + 65;
		}

		putchar(ch);
	}
	return 0;
}

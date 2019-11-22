#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char checksum = -1;
        char ch; 	
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		checksum += ch;
		if (ch == '\n')
			break;
	}
	printf("\n%d\n", checksum);
	return 0;
}

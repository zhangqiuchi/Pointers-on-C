#include <stdio.h>



int main(void)
{

	char ch;
	int oo = 0;
	int k = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == '{')
		{
			oo ++;
			k ++;
		}
		else if (ch == '}')
		{
			oo --;
			k ++;
		}
		if (oo < 0)
			break;
	
	}

	if (oo == 0)
		printf("%d", k/2);
	else if (oo < 0||oo > 0)
		printf("erro");
	return 0;
}

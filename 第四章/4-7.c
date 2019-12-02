#include <stdio.h>
#include <string.h>
void deblank(char string[])
{
	int flag = 0;
	for (int i = 0; *(string+i) != '\0'; i ++)
	{
		while (*(string+i) == ' ' && flag == 1)
		{
			for (int j = i; *(string+j) != '\0'; j++)
				*(string+j) = *(string+j+1);
		}
		
		if (*(string+i) == ' ')
			flag = 1;
		else
			flag = 0;
	}
	
}

int main()
{
	char a[] = "a             b";
	deblank(a);
	printf("%s", a);
	getchar();
}
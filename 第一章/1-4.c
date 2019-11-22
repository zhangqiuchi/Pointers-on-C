#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main(void)
{
	int length = 0;
	char input[MAX_LENGTH];
	char output[MAX_LENGTH];

	while (gets(input) != NULL)
	{
		int len = strlen(input);
		if (len == MAX_LENGTH)
		{
			fprintf(stdout, "输入不合法\n");
			return -1;
		}
		if (len > length)
		{
			strset(output, '\0');
			length = len;
			strcpy(output, input);
			printf("%s\n", output);
		}
	}

	printf("最长的字符串是%s", output);
	return 0;
}

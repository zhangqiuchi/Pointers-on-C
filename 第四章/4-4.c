#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_n(char dst[], char src[], int n)
{
	int num = strlen(src);
	if (src == NULL || dst == NULL)
		return;

	for (int i = 0; i < n; i ++)
	{
		if (i < num)
			dst[i] = src[i];
		if (i > num)
			dst[i] = '\0';
	
	}
		return;
}

void copy(char dst[], char src[], int n)
{
	int num = 0;
	
	while (*src != '\0')
	{
		if (n == num)
			break;
		*dst++ = *src++;
		num ++;
	}
	
	if (num < n)
		for (int i = 0; i < n - num; i ++)
		
			*(dst + i) = '\0';
	return;
}
int main()
{	char src[] = "zhangqiuchi";
	char dat[100] = {'\0'};
	copy(dat, src, 20);
	printf("%s", dat);
	system("pause");
	return 0;
}

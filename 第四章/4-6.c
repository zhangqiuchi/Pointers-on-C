#include <stdio.h>
#include <string.h>

int substr(char dst[], char src[], int start, int len)
{
	char* go = src;
	char* to = dst;
	int srclen = strlen(src);
	int d = 0;
	if (src == NULL || dst == NULL || start < 0 || start > srclen || len < 0 )
	{
		*dst = '\0';
		return 0;
	}
	
	for (int i = 0; i < len; i ++)
	{
		if (i < srclen)
		{

			*to++ = *(go + (start-1)+i);
			d ++;
		}
		if (i >= srclen)
		{
			*to++ = '\0';
			d ++;

		}
	}
	if (len <= srclen)
		*to = '\0';

	return d;
}
int sub(char dst[], char src[], int start, int len)
{
	char * go = src;
	char * to = dst;
	int srclen = strlen(src);
	int i = 0;

	if (src == NULL || dst == NULL || start < 0 || start > srclen || len < 0 )
	{
		*dst = '\0';
		return 0;
	}
	while (*(go+(start-1)+i) != '\0')
	{
		if (i == len)
			break;
		*to++ = *(go+(start-1)+i);
		i ++;
	}

	if (i < len)
	{
	//	i = i + (len - i);
		int k = len - i;
		for (int j = 0; j < k;j ++)
		{
			*to = '\0';
			i ++;
			
		}
				
	}
	*to = '\0';

	return i;
}

int main()
{
	char src[] = "zhangqiuchi";
	char dst[100] = {0};
	int len1 = 13;
	int len2 = 15;
	int len3 = 16;
	if (len1 == sub(dst, src, 1, len1))
		printf("%s\n", dst);
	if (len2 == sub(dst,src, 5, len2))
		printf("%s\n", dst);
	
	if (len3 == sub(dst, src, 8, len3))
		printf("%s\n", dst);

	if (len3 != sub(dst, src, 14, len3))
		printf("test");
	return 0;
}

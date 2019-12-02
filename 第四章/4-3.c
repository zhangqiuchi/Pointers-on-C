#include <stdio.h>

int main()
{
	int a,b,c;
	printf("请输入三个数:");
	scanf("%d%d%d", &a, &b, &c);

	if (a > 0 && b > 0 && c > 0 && a == b && b == c && a + b > c)
		printf("等边三角形\n");
	else if (a > 0 && b > 0 && c > 0 && a != b && a != c && a + b > c)
		printf("不等边三角形\n");
	else
		printf("输入不合法");
	return 0;
}

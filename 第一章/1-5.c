#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers( int column[], int max);

void rearrange( char *output, char const *input,
	     int n_columns, int const columns[]);

int main(void)
{
	int n_column;
	int column[MAX_COLS] = {0};
	char input[MAX_INPUT] = {0};
	char output[MAX_INPUT];

	n_column = read_column_numbers( column, MAX_COLS);
	printf("%d", n_column);
	system("pause");
	return 0;
}

int read_column_numbers( int column[], int max)
{
	int num = 0;
	char ch;

	for (;(num < max)&&(scanf("%d", &column[num]) == 1)&&(column[num] >= 0); num ++);
	if (num % 2 != 0)
	{
		printf("你的输入不合法没有按照套路来");
		exit(EXIT_FAILURE);
	}

    while ((ch = getchar()) != EOF && ch != '\n')
			;
	return num;
}

#if 1
void rearrange( char *output, char const *input,
	     int n_columns, int const columns[])
{







}
#else 

void rearrange( char *output, char const *input,
	     int n_columns, int const columns[]);
{








}
#endif


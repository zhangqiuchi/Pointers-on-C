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
	char output[MAX_INPUT] = {0};
	
	n_column = read_column_numbers( column, MAX_COLS);
	
	while (gets(input) != NULL)
	{
			printf("你的输入是：%s\n", input);
			rearrange( output, input, n_column, column);
			printf("你的输出是: %s\n", output);
	
	}
	return 0;
}

int read_column_numbers( int column[], int max)
{
	int num = 0;
	char ch;
	
	while ((num < max) && (scanf("%d", &column[num]) == 1) && (column[num] >= 0))
		num ++;
	while ((ch = getchar()) != EOF && ch != '\n')
		;
	return num;
}

void rearrange( char *output, char const *input,
		int n_columns, int const columns[])
{
	int col;
	int output_col;
	int len;
	int ss;
	int trun = 1;

	len = strlen(input);
	output_col = 0;

	if (n_columns % 2 == 1)
	{
		ss = n_columns / 2;
		trun = 0;
	}
	
	for ( col = 0;col < n_columns && ss ; col += 2)
	{
		int nchars = columns[col+1] - columns[col] + 1;
		if (columns[col] >= len ||
				output_col == MAX_INPUT - 1)
			break;
		if (output_col + nchars > MAX_INPUT -1)
			nchars = MAX_INPUT - output_col - 1;
		strncpy(output + output_col, input+columns[col], nchars);
		output_col += nchars;
		if (trun == 0)
			ss --;
	}

	if (trun == 0)
	{
		strcpy(output + output_col, input + columns[col]);
		output[output_col + len - columns[col]] = '\0';
	}else{
		output[output_col] = '\0';
	
	}
}

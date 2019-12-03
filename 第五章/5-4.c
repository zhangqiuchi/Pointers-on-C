#include <stdio.h>
#include <limits.h>
void set_bit(char bit_array[],
	unsigned bit_number)
{
	/*
	int a = bit_number / CHAR_BIT;
	int yi = 1;
	if ( a == 0)
	{
		yi <<= bit_number;
		bit_array[a] |= yi;
	}
	if (a > 0)
	{
		yi <<= bit_number % CHAR_BIT;
		bit_array[a] |= yi; 
	}
	*/
	bit_array[bit_number / CHAR_BIT] |= 1 << (bit_number % CHAR_BIT); 	

}
void clear_bit(char bit_array[],
	  unsigned bit_number)
{
//	bit_array[bit_number / CHAR_BIT] &= (-128) >> ((CHAR_BIT-1) - bit_number % CHAR_BIT); 
	bit_array[bit_number / CHAR_BIT] &= ~(1 << (bit_number % CHAR_BIT));	
}

void assign_bit(char bit_array[],
	unsigned bit_number, int value )
{
	if (value != 0)
		bit_array[bit_number / CHAR_BIT] |= 1 << (bit_number % CHAR_BIT);
	else	
		bit_array[bit_number / CHAR_BIT] &= ~(1 << (bit_number % CHAR_BIT));	
}

int test_bit(char bit_array[],
	unsigned bit_number)
{
	if (bit_array[bit_number / CHAR_BIT] &
			1 << (bit_number % CHAR_BIT) != 0)
		return 1;
	else
		return 0;

}

int main()
{
	char a[] = {'c','b'};
	if (test_bit(a, 0))
	printf("%c", a[0]);
	return 0;
}

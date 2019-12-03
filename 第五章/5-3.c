#include <stdio.h>

unsigned int reverse_bits( unsigned int value )
{
	unsigned int ddd = 0;
	
	for (unsigned int i = 1 ; i != 0; i <<= 1)
	{
		ddd <<= 1;
		if (value&1)
			ddd |= 1;
		value >>= 1;
	}
	
	return ddd;
}



int main()
{
 	unsigned int value = 25;
	unsigned int a = reverse_bits(value);
	printf("%u", a);
	getchar();
	return 0;
}

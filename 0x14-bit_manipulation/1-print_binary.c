#include "main.h"
#define SIZE (sizeof(int) * CHAR_BIT)

/**
* print_binary - printing a number in binary using bitwise operators
* @n: number to convert
* Return: binary number or zero
*/

void print_binary(unsigned long int n)
{
int bit, flag;
unsigned long int o, i;

flag = 0;
i = 0;
if (n == 0)
{
	_putchar('0');
}

while (i < SIZE)
{
	o = n >> (SIZE - 1 - i);
	bit = o & 1;

	if (bit == 0 && flag == 0)
	{
		i++;
		continue;
	}
	if (bit == 1 && flag == 0)
	{
		flag = 1;
	}

	_putchar(bit + '0');
	i++;
}
}


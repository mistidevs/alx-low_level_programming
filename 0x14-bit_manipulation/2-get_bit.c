#include "main.h"
#define SIZE (sizeof(unsigned long int) * CHAR_BIT)

/**
* get_bit - get the bit at a certain index
* @n: number to get bit index of
* @index: index of bit to get
*
* Return: value of a bit at a given index
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned long int mask;

mask = 1;

if (n == 0 && index == 0)
	return (0);
else if (n == 0 && index != 0)
	return (-1);

if (index < SIZE)
{
	n = n >> index;
	bit = n & mask;
	return (bit);
}

else
	return (-1);

}

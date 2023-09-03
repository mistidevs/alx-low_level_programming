#include "main.h"
#define SIZE (sizeof(unsigned long int) * CHAR_BIT)

/**
* set_bit - sets the bit at an index to 1
* @n: pointer to unsigned long integer
* @index: index to set value of bit to 1
*
* Return: value of number whose bit at index is changed to 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (n == 0 && index != 0)
	return (-1);

mask = 1;
if (index <= SIZE)
{
	mask = mask << index;
	*n = *n | mask;
	return (*n);
}

else
	return (-1);
}

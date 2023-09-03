#include "main.h"

/**
* get_endianness - check if a CPU is little or big endian
*
* Return: void
*/

int get_endianness(void)
{
unsigned int x = 1;
char *p = (char *)&x;

if ((unsigned int)*p == x)
	return (1);
else
	return (0);
}

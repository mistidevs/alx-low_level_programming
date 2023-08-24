#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: pointer to array to fill
* @b: byte to fill memory with
* @n: number of bytes to fill
*
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}

return (s);
}

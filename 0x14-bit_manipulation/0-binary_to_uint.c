#include "main.h"

/**
* binary_to_uint - converting a binary char to an unsigned integer
* @b: pointer to binary char
*
* Return: unsigned int or NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int sum, len, wi, product;
int i, bit;

if (b == NULL)
	return (0);

sum = wi = 0;
len = strlen(b);

if (len == 0)
	return (0);
i = len - 1;

while (i >= 0)
{
	if (b[i] == '0' || b[i] == '1')
	{
		bit = b[i] - '0';
		product = bit << wi;
		sum += product;
		wi++;
	}
	else
		return (0);
	i--;
}

return (sum);
}

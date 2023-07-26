#include "main.h"

/**
* strncat - concentate n bytes of src onto dest
* @dest: destination file
* @src: source file
*
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int len, leng, i, p, sum;
len = 0;
leng = 0;
p = 0;

while (dest[len] != '\0')
	len++;

while (src[leng] != '\0')
	leng++;

i = len;
sum = len + leng;

while (i < sum && p < n)
{
	dest[i] = src[p];
	i++;
	p++;
}

if (leng >= n)
	return (dest);

else
	dest[i] = '\0';

return (dest);
}

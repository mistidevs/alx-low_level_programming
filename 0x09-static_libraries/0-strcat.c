#include "main.h"

/**
* _strcat - concentating on string onto another
* @dest: destination file
* @src: source file
*
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
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

while (i < sum && p < leng)
{
	dest[i] = src[p];
	i++;
	p++;
}

dest[i] = '\0';

return (dest);
}

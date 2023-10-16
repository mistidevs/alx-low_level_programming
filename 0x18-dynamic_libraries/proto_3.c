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

/**
* _strncat - concentate n bytes of src onto dest
* @dest: destination file
* @src: source file
* @n: number of bytes to concentanate
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

/**
* _strncpy - copies a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes to write
*
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}

for (; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}

/**
 * _strcmp - compare two strings
 * @str1: First string
 * @str2: Second string
 * Return: 1 - if strings are identical considering wildcard
 *	   0 - otherwise
 */
int _strcmp(char *str1, char *str2)
{
	if (*str2 == '*')
		return (_strcmp(str1, str2 + 1));
	if (*str1 != *str2)
		return (_strcmp(str1 + 1, str2));
	if (*str1 == *str2)
	{
		if (*(str1 + 1) == *(str2 + 1))
			return (1);
		else if (*(str2 + 1) != '*')
			return (0);
		else if (*(str1 + 1) == *(str2 + 2))
			return (1);
		else
			return (_strcmp(str1 + 1, str2 + 1));
	}
	if (!*str1)
		return (0);
	return (-1);
}


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

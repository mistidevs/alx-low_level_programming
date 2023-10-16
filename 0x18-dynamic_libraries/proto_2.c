#include "main.h"

/**
* _isdigit - checking if value is  number
* @c: integer to check
*
* Return: appropriate value
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

/**
 * _strlen - Length of string
 * @s: string passed
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!*s)
		return (0);
	i++;
	return (i + _strlen(s + 1));
}

/**
* _puts - outputs a string to terminal
* @str: string to output
*
* Return: it is a void
*/

void _puts(char *str)
{
char i;
for (; *str != '\0' ; str++)
{
i = *str;
_putchar(i);
}
_putchar('\n');
}

/**
* _strcpy - copy string src onto string dest
* @dest: destination to copy string
* @src: source of string
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int n;
int i;
n = 0;

while (src[n] != '\0')
{
n++;
}

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}

for (; i == n ; i++)
{
dest[i] = '\0';
}

return (dest);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

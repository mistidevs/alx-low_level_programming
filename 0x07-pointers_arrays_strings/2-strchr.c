#include "main.h"

#define NULL 0

/**
* _strlen - gets length of string
* @p: string to get length of
*
* Return: length of string
*/

int _strlen(char *p)
{
int x;

for (x = 0; p[x] != '\0'; x++)
{
	x++;
}

return (x);
}

/**
* _strchr - output first occurence of a character
* and the rest of the string
* @s: string
* @c: character to locate
*
* Return: pointer to c or NULL
*/

char *_strchr(char *s, char c)
{
int i;

if (s == NULL)
	return (NULL);

if (*s == '\0')
	return (NULL);
if (c == '\0')
	return (s + _strlen(s));

for (i = 0; s[i] != '\0' && c != '\0'; i++)
{
	if (s[i] == c)
	{
		return (&s[i]);
	}

}

return (NULL);
}

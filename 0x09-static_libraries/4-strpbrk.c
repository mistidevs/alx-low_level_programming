#include "main.h"

#define NULL 0

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to check in
* @accept: string whose bytes are used to check
*
* Return: pointer to one of bytes in accept or NULL
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			return (&s[i]);
		}
	}
}

return (NULL);
}

#include "main.h"

/**
* _strlen - gets length of string
* @p: string to get length of
*
* Return: length of string
*/

unsigned int _strlen(char *p)
{
int x;

for (x = 0; p[x] != '\0'; x++)
{
	x++;
}

return (x);
}

/**
* _strspn - getting number of bytes only in
* another array
* @s: array to search
* @accept: array used to search
*
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, p;
int flag;
p = 0;

for (i = 0; s[i] != '\0'; i++)
{
	flag = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			p++;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		break;
	}
}

return (p);
}

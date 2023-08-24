#include "main.h"

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

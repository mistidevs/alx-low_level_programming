#include "main.h"

/**
* string_toupper - convert a string to uppercase
* @p: pointer
*
* Return: pointer to p
*/

char *string_toupper(char *p)
{
int n;
int ascii;
char upper;
n = 0;

for (n = 0 ; p[n] != '\0' ; n++)
{
	if (p[n] >= 'a' && p[n] <= 'z')
	{
		ascii = p[n] -32;
		upper = (char)ascii;
		p[n] = upper;
	}
}

return (p);
}

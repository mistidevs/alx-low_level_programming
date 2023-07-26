#include "main.h"

/**
* cap_string - Capitalizing each word after '\t'
* @p: string to capitalize
*
* Return: pointer to string
*/

char *cap_string(char *p)
{
int n;
int ascii;
char upper;

for (n = 0 ; p[n] != '\0' ; n++)
{
	if ((p[n] == '\t' || p[n] == '\n' || p[n] == '.' || p[n] == '!'
	|| p[n] == ' ' || p[n] == '(' || p[n] == ')' || p[n] == ',' ||
	p[n] == ';' || p[n] == '?' || p[n] == '\"' || p[n] == '{' ||
	p[n] == '}') && (p[n + 1] >= 'a' && p[n + 1] <= 'z'))
	{
		ascii = p[n + 1] - 32;
		upper = (char)ascii;
		p[n + 1] = upper;
	}
}

return (p);
}

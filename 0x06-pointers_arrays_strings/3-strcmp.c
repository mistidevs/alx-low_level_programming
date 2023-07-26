#include "main.h"

/**
* _strcmp - compare two strings and print difference of the first
* not similar characters
* @s1: first string
* @s2: second string
*
* Return: difference of not similar chars or zero
*/

int _strcmp(char *s1, char *s2)
{
int n;

for (n = 0 ; s1[n] != '\0' && s2[n] != '\0' ; n++)
{
	if (s1[n] == s2[n])
		continue;
	else
		return (s1[n] - s2[n]);
}

return (0);
}

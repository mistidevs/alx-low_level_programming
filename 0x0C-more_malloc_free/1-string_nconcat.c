#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concetenating two strings with n bytes of s2
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to concatenate
*
* Return: pointer to allocated space or NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int len, len1, len2, i, j;
len1 = len2 = 0;

if (s1 != NULL)
{
	while (s1[len1] != '\0')
		len1++;
}
else
	len1 = 0;

if (s2 != NULL)
{
	while (s2[len2] != '\0')
		len2++;
}
else
	len2 = 0;

if (n >= len2)
{
	len = len1 + len2;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
}
else
{
	len = len1 + n;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
}

for (i = 0; i < len1; i++)
	s[i] = s1[i];

for (j = 0; i < len; j++, i++)
	s[i] = s2[j];

return (s);
}

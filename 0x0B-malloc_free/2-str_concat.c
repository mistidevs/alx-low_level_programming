#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string to concatenate
* @s2: second string to concatenate
*
* Return: concatenated string or NULL
*/

char *str_concat(char *s1, char *s2)
{
int len1, len2, len, i, j;
char *cat;
len1 = len2 = len = i = j = 0;

if (s1 != NULL)
	while (s1[len1] != '\0')
	{
		len1++;
	}

if (s2 != NULL)
	while (s2[len2] != '\0')
	{
		len2++;
	}

len = len1 + len2;

cat = malloc(sizeof(char) * len + 1);

if (cat == NULL)
{
	return (NULL);
}

while (i < len1)
{
	cat[i] = s1[i];
	i++;
}

while (i < len)
{
	cat[i] = s2[j];
	i++, j++;
}

cat[i] = '\0';

return (cat);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of s2 bytes to copy
*
* Return: pointer to a string or NULL if it fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

if (n >= strlen(s2))
{
	n = strlen(s2);
}

s = malloc(strlen(s1) + n + 1);

if (s == NULL)
	return (NULL);

strcpy(s, s1);

memcpy(s + strlen(s1), s2, n);

s[strlen(s1) + n] = '\0';

return (s);
}

#include "main.h"

/**
 * _strcmp - compare two strings
 * @str1: First string
 * @str2: Second string
 * Return: 1 - if strings are identical considering wildcard
 *	   0 - otherwise
 */
int _strcmp(char *str1, char *str2)
{
	if (*str2 == '*')
		return (_strcmp(str1, str2 + 1));
	if (*str1 != *str2)
		return (_strcmp(str1 + 1, str2));
	if (*str1 == *str2)
	{
		if (*(str1 + 1) == *(str2 + 1))
			return (1);
		else if (*(str2 + 1) != '*')
			return (0);
		else if (*(str1 + 1) == *(str2 + 2))
			return (1);
		else
			return (_strcmp(str1 + 1, str2 + 1));
	}
	if (!*str1)
		return (0);
	return (-1);
}
/**
 * check_wild - check for character *
 * @s: String passed
 * Return: 1
 */
int check_wild(char *s)
{
	if (!*s)
		return (1);
	if (*s != '*')
		return (0);
	return (check_wild(s + 1));
}

/**
 * _strlen - Length of string
 * @s: string passed
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!*s)
		return (0);
	i++;
	return (i + _strlen(s + 1));
}

/**
 * wildcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 1 - if two strings can be considered identical
 *	   0 - otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (check_wild(s2))
		return (1);
	if (*(s1 + _strlen(s1) - 1) != *(s2 + _strlen(s2) - 1))
	{
		if (*(s2 + _strlen(s2) - 1) != '*')
			return (0);
	}
	return (_strcmp(s1, s2));
}

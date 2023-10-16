#include "main.h"

/**
* _memcpy - copies memory area
* @dest: destination of copy
* @src: source of copy
* @n: bytes to copy
*
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

return (dest);
}

/**
* _strchr - output first occurence of a character
* and the rest of the string
* @s: string
* @c: character to locate
*
* Return: pointer to c or NULL
*/

char *_strchr(char *s, char c)
{
int i;

if (s == NULL)
	return (NULL);

if (*s == '\0')
	return (NULL);
if (c == '\0')
	return (s + _strlen(s));

for (i = 0; s[i] != '\0' && c != '\0'; i++)
{
	if (s[i] == c)
	{
		return (&s[i]);
	}

}

return (NULL);
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

/**
* _strstr - Locating a substring
* @haystack: string to check for
* @needle: substring to check for
*
* Return: pointer to start of substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;
int haystack_len = _strlen(haystack);
int needle_len = _strlen(needle);

if (haystack_len < needle_len)
{
	return (NULL);
}
if (haystack == NULL)
{
	return (NULL);
}

if (needle_len == 0)
	return (&haystack[0]);

for (i = 0; haystack[i] != '\0' && i <= haystack_len - needle_len; i++)
{
	for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
	{
		if (j == needle_len - 1)
		{
			return (haystack + i);
		}
	}
	if (j == needle_len)
	{
		break;
	}


}

return (NULL);
}

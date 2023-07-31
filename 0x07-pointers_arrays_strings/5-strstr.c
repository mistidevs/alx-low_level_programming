#include "main.h"

#define NULL 0

/**
* _strlen - gets length of string
* @p: string to get length of
*
* Return: length of string
*/

unsigned int _strlen(char *p)
{
int x;
x = 0;

while (p[x] != '\0')
{
	x++;
}

return (x);
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
if (haystack == NULL || needle == NULL)
{
	return (NULL);
}

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


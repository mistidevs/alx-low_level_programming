#include "main.h"

#define NULL 0

/**
* _strlen - gets length of string
* @p: string to get length of
*
* Return: length of string
*/

int _strlen(char *p)
{
int x;

for (x = 0; p[x] != '\0'; x++)
{
        x++;
}

return (x);
}

/**
* _strstr - Locating a substring
* @haysatck: string to check for
* @needle: substring to check for
*
* Return: pointer to start of substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

if (needle[_strlen(needle) - 1] != '\0')
	return (NULL);

for (i = 0; haystack[i] != '\0'; i++)
{
        for (j = 0; needle[j] != '\0'; j++)
        {
                if (haystack[i] == needle[j])
                {
                        if (needle[j + 1] == '\0')
                                return (&haystack[i - j]);
                        else if (i - j >= _strlen(needle))
                                return (NULL);
                        else if (haystack[i + 1] != needle[j + 1]
                        && needle[j + 1] != '\0')
                                break;
                }
        }
}

return (NULL);
}


#include "main.h"

#define NULL 0

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

for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] == c)
	{
		return (&s[i]);
		break;
	}

}

return (NULL);
}

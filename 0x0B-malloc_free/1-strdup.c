#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copying a sttring and returning a pointer to the duplicate
* @str: sttring to duplicate
*
* Return: pointer to duplicate or NULL
*/

char *_strdup(char *str)
{
char *st;
int i;
int len;
len = 0;
i = 0;

if (str == NULL)
{
	return (NULL);
}

while (str[len] != '\0')
{
	len++;
}

st = malloc((sizeof(char) * len) + 1);

if (st == NULL)
{
	return (NULL);
}

while (i < len)
{
	st[i] = str[i];
	i++;
}

st[i] = '\0';

return (st);
}

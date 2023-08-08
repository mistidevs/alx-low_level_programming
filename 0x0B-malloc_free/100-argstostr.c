#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenating arguments to a string
* @ac: argument counter
* @av: argument vector
*
* Return: pointer to char
*/

char *argstostr(int ac, char **av)
{
int i;
char *str;
size_t size;

if (ac == 0 || av == NULL)
	return (NULL);

size = 1;
for (i = 0; i < ac; i++)
{
	size += strlen(av[i]) + 1;
}

str = malloc(size);
if (str == NULL)
{
	return (NULL);
}

str[0] = '\0';
for (i = 0; i < ac; i++)
{
	strcat(str, av[i]);
	strcat(str, "\n");
}

return (str);
}

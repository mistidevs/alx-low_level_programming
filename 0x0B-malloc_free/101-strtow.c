#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* strtow - splitting a string into words
* @str: string to split
*
* Return: pointer to an array of strings
*/

char **strtow(char *str)
{
int i, j, word_len;
char *token, **tab;
char *dup_str;
char *tmp;

if (str == NULL || *str == '\0')
	return (NULL);

dup_str = strdup(str);
if (dup_str == NULL)
	return (NULL);

tab = malloc(sizeof(char *) * (1 + strcspn(dup_str, " \t\n")));
if (tab == NULL)
{
	free(dup_str);
	return (NULL);
}
i = 0;
token = strtok_r(dup_str, " \t\n", &tmp);
while (token != NULL)
{
	word_len = strlen(token);
	tab[i] = malloc(sizeof(char) * (word_len + 1));
	if (tab[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(tab[j]);
		}
		free(tab);
		free(dup_str);
		return (NULL);
	}
	strcpy(tab[i], token);
	i++;
	token = strtok_r(NULL, " \t\n", &tmp);
}

tab[i] = NULL;
free(dup_str);
return (tab);
}

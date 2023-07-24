#include "main.h"

/**
* _strlen - printing the length of a string
* @s: string being dereferenced
*
* Return: 0 if successful
*/

int _strlen(char *s)
{
int i;
for (i = 0 ; *s != '\0' ; i++)
{
s++;
}

return (i);
}

#include "main.h"

/**
* _strcpy - copy string src onto string dest
* @dest: destination to copy string
* @src: source of string
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int n;
int i;
n = 0;

while (src[n] != '\0')
{
n++;
}

for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}

for (; i == n ; i++)
{
dest[i] = '\0';
}

return (dest);
}

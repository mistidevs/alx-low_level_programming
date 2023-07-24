#include "main.h"

/**
* rev_string - printing a string in reverse
* @s: string to print in reverse
*
* Return: void
*/

void rev_string(char *s)
{
int i;
int len = 0;
char temp;

while (s[len] != '\0')
{
len++;
}

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}

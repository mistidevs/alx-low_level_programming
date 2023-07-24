#include "main.h"

/**
* puts2 - printing only even characters
* @str: string to be print even characters of
*
* Return: void
*/

void puts2(char *str)
{
int i;
int len;
i = 0;
len = 0;

while (str[len] != '\0')
{
len++;
}

for (; i < len ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

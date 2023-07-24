#include "main.h"

/**
* puts_half - prints second half of string
* @str: string inputted
* Return: void
*/

void puts_half(char *str)
{
int len;
int i;
len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
i = len / 2;
while (i < len)
{
_putchar(str[i]);
i++;
}
}
else
{
i = (len + 1) / 2;
while (i <= (len - 1))
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}

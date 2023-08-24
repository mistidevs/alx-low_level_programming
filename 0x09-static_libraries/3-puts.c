#include "main.h"

/**
* _puts - outputs a string to terminal
* @str: string to output
*
* Return: it is a void
*/

void _puts(char *str)
{
char i;
for (; *str != '\0' ; str++)
{
i = *str;
_putchar(i);
}
_putchar('\n');
}

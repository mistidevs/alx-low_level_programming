#include <stdio.h>

/**
* main - prints lowercase alphabet in reverse
* uses putchar function
*
* Return: 0 if successful
*/

int main(void)
{
char c;

for (c = 'z' ; c >= 'a' ; --c)
{
putchar(c);
}
putchar('\n');

return (0);
}

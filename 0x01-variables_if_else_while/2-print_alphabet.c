#include <stdio.h>

/**
* main- prints alphabet in lowercase
* uses putchar
*
* Return: 0 if successful
*/

int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; ++c)
{
putchar(c);
}
putchar('\n');

return (0);
}

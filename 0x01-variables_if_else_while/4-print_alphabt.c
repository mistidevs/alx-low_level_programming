#include <stdio.h>

/**
* main- prints alphabet in lowercase except q and e
* uses putchar
*
* Return: 0 if successful
*/

int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; ++c)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');

return (0);
}

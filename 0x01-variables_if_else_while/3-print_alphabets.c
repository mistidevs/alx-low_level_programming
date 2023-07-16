#include <stdio.h>

/**
* main- prints alphabet in lowercase and uppercase
* uses putchar
*
* Return: 0 if successful
*/

int main(void)
{
char c;
char C;
for (c = 'a' ; c <= 'z' ; ++c)
{
putchar(c);
}
for (C = 'A' ; C <= 'Z' ; ++C)
{
putchar(C);
}
putchar('\n');

return (0);
}

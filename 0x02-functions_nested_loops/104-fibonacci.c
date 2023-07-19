#include <stdio.h>

/**
* main - First 98 fibonacci numbers
*
Rw*
* Return: 0 if successful
*/

int main(void)
{
int p;
unsigned long int n, o, q;

p = 0;
n = 0;
o = 1;
q = 0;
while (p < 98)
{
q = n + o;
n = o;
o = q;
printf("%lu", q);
if (p < 97)
{
printf(", ");
}
p++;
}
putchar('\n');

return (0);
}



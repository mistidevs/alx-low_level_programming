#include <stdio.h>

/**
* main - First 50 fibonacci numbers
*
*
* Return: 0 if successful
*/

int main(void)
{
int n, o, p;
long int q;
printf("1, ");
printf("2, ");
p = 0;
n = 1;
o = 2;
while (p < 48)
{
q = n + o;
n = o;
o = q;
if (p != 47)
{
printf("%ld, ", q);
}
else
{
printf("%ld\n", q);
}
p++;
}

return (0);
}

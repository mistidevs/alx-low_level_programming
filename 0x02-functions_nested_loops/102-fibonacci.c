#include <stdio.h>

/**
* main - First 50 fibonacci numbers
*
*
* Return: 0 if successful
*/

int main(void)
{
long int n, o, p, q;
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
printf("%li, ", q);
}
else
{
printf("%li\n", q);
}
p++;
}

return (0);
}


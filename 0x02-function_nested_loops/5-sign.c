#include "main.h"

/**
* print_sign - printing the side on the number line
* a value appears
*
* Return: 0 if successful
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}

return (0);
}


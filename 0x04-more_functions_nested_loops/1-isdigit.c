#include "main.h"

/**
* _isdigit - checking if value is  number
* @c: integer to check
*
* Return: appropriate value
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

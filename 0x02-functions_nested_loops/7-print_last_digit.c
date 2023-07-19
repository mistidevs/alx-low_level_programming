#include "main.h"
#include <stdlib.h>
/**
* print_last_digit - printing the last digit of a number
*
* Return: the last digit
*/

int print_last_digit(int n)
{
int last_digit;
last_digit = abs(n % 10);

return (last_digit);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_numbers - printing numbers following by a new line
* @separator: string separator for the numbers
* @n: number of parameters to print
* @...: paramaters to print
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list am;
unsigned int i;
char *empty_string;
int number;

empty_string = "";

if (separator == NULL || n <= 0)
{
	if (separator == NULL)
		printf("%s", empty_string);
	else
		return;

}

va_start(am, n);

for (i = 0; i < n; i++)
{
	number = va_arg(am, int);
	printf("%d", number);
	if (i < n - 1)
		printf("%s", separator);
	else
		printf("\n");
}

va_end(am);
}

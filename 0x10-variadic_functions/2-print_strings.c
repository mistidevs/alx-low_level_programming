#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_strings - printing strings followed by a new line
* @separator: string separator for the strings
* @n: number of parameters to print
* @...: paramaters to print
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list am;
unsigned int i;
const char  *string;

if (n <= 0)
	return;

va_start(am, n);

for (i = 0; i < n; i++)
{
	string = va_arg(am, const char *);
	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);
	if (i != (n - 1) && separator != NULL && *separator != '\0')
		printf("%s", separator);
}

printf("\n");

va_end(am);
}

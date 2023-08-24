#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_all - printing any value of accepted type
* @format: format of value to print
* @...: parameters to print
*
* Return: void
*/

void print_all(const char * const format, ...)
{
int i;
va_list ar;
char *s;
char *str;

s = "";
va_start(ar, format);

if (format)
{
	while (*format)
	{
		switch (*format)
		{
			case 'c':
				printf("%s%c", s, va_arg(ar, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(ar, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(ar, double));
				break;
			case 's':
				str = va_arg(ar, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", s, str);
				break;
			default:
				break;
		}
		s = ", ";
		i++;
	}
}
va_end(ar);
printf("\n");
}

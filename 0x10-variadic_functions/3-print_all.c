#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void print_char(char c)
{
printf("%c", c);
}


void print_int(const unsigned int i)
{
printf("%d", i);
}

void print_float(double f)
{
printf("%f", f);
}

void print_string(const char *s)
{
if (s == NULL)
{
	printf("(nil)");
	return;
}

printf("%s", s);
}

void print_all(const char * const format, ...)
{
int i, j;
va_list ar;
char arr[4] = {'c', 'i', 'f', 's'};
i = j = 0;
va_start(ar, format);

while (format[i] != '\0')
{
	switch (format[i])
	{
		case 'c':
			print_char(va_arg(ar, int));
			break;
		case 'i':
			print_int(va_arg(ar, int));
			break;
		case 'f':
			print_float(va_arg(ar, double));
			break;
		case 's':
			print_string(va_arg(ar, const char *));
			break;
		default:
			break;
	}
	while (j < 4)
	{
		if (format[i] == arr[j] && format[i + 1] != '\0')
			printf(", ");
		j++;
	}
	i++;
	j = 0;
}

printf("\n");
va_end(ar);
}

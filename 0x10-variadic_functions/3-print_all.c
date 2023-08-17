#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_char - printing character c
* @c: character to print
*
* Return: void
*/

void print_char(char c)
{
printf("%c", c);
}

/**
* print_int - printing int i
* @i: int to print
*
* Return: void
*/

void print_int(const unsigned int i)
{
printf("%d", i);
}

/**
* print_float - printing double f
* @f: double to print
*
* Return: void
*/

void print_float(double f)
{
printf("%f", f);
}

/**
* print_all - printing any value of accepted type
* @format: format of value to print
* @...: parameters to print
*
* Return: void
*/

void print_all(const char * const format, ...)
{
int i, j;
va_list ar;
char arr[4] = {'c', 'i', 'f', 's'}, *s;
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
			s = va_arg(ar, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
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
	i++, j = 0;
}
printf("\n"), va_end(ar);
}

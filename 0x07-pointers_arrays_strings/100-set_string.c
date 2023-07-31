#include "main.h"

/**
* set_string - set value of a pointer to a char
* @s: double pointer to change value of
* @to: source of value
*
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}

#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - printing name depending on function pointed to
* @name: name to print
* @f: function pointer to function to use
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;

f(name);
}

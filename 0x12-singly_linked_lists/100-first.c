#include <stdio.h>

/**
* first - prints before main function
*
* Return: void
*/

__attribute__((constructor)) void first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

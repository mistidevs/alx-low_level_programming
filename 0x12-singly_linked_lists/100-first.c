#include <stdio.h>

/**
* first - prints before main function
*
* Return: 0 on success
*/

__attribute__((constructor))int first(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");

return (0);
}

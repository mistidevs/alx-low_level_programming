#include <stdio.h>

/**
* main - print number of arguments passed to program
* @argc: argument counter
* @argv: argument vector
*
* Return: 0 if successful
*/

int main(int argc, char __attribute__ ((unused)) *argv[])
{
argc--;

printf("%d\n", argc);

return (0);
}



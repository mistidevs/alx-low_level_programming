#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers or prints Error
* @argc: argument counter
* @argv: argument vector
*
* Return: 0 if successful
*/

int main(int argc, char *argv[])
{
int __attribute__ ((unused)) mul;

if (argc == 3)
{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
}

else
{
	printf("Error\n");
}

return (0);
}

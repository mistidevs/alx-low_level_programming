#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds all positive numbers
* @argc: argument counter
* @argv: argument vector
*
* Return: 0 if successful
*         1 if not
*/

int main(int argc, char *argv[])
{
int i, sum;
char *endptr;
sum = 0;

if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);
}

else
{
	printf("0\n");
}

return (0);
}

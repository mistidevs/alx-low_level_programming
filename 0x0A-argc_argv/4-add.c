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
sum = 0;

if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][1] = '0' && argv[i][1] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		else if (isdigit(argv[i][0]) && argv[i][0] >= '0' && argv[i][0] <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
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

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
char *endptr;
long num;
int i, sum;
sum = 0;
i = 0;
num = strtol(argv[i], &endptr, 10);

if (argc > 1)
{
	if (*endptr == '\0' && num > 0)
	{
		sum += (int)num;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
        printf("%d\n", sum);
}

else
{
        printf("0\n");
}

return (0);
}

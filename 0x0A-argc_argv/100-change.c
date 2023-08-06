#include <stdio.h>
#include <stdlib.h>

/**
* main - prints minimum number coins possible to make change
* @argc: argument counter
* @argv: argument vector
*
* Return: 0 if successful
*         1 if not
*/

int main(int argc, char *argv[])
{
int sum, num;
sum = 0;

if (argc == 2)
{
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		while (num / 25)
		{
			sum++;
		}
		while (num / 10)
		{
			sum++;
		}
		while (num / 5)
		{
			sum++;
		}
		while (num / 2)
		{
			sum++;
		}
		while (num - 1 >= 0)
		{
			sum++;
		}
	}
	printf("%d\n", sum);
}

else
{
	printf("Error\n");
	return (1);
}

return (0);
}

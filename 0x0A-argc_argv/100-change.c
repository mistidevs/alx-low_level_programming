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
int sum, num, n, i;
int coins[] = {25, 10, 5, 2, 1};
n = 5;
sum = 0;

if (argc == 2)
{
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			sum++;
		}
		if (num == 0)
			break;
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

#include <stdio.h>
#include <stdlib.h>

/**
* main - printing opcodes of the main function
* @argc: argument counter
* @argv: argument vector
*
* Return: 0 or specific number
*/

int main(int argc, char **argv)
{
int bytes;
int i;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
	printf("Error\n");
	exit(2);
}

void *main_address = &main;
unsigned char *opcodes = (unsigned char *)main_address;

for (i = 0; i < bytes; i++)
{
	printf("%02x ", opcodes[i]);
}

printf("\n");

return (0);
}

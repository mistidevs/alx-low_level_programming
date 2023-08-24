#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

int *allocate_memory(int size);
int *convert_to_num(char *str);
int validate_input(char *str1, char *str2);

int *convert_to_num(char *str)
{
int len, i;
int *num;

len = strlen(str);
num = allocate_memory(len);

if (num == NULL)
        return (NULL);

for (i = 0; i < len; i++)
{
        num[i] = str[i] - '0';
}

return (num);
}

int *allocate_memory(int size)
{
int *ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
{
        return (NULL);
}

return (ptr);
}

int validate_input(char *str1, char *str2)
{
int len1, len2, i, flag;

flag = 0;
len1 = strlen(str1);
len2 = strlen(str2);

for (i = 0; i < len1; i++)
{
if (isdigit(str1[i]))
        flag = 0;
else
        flag = 1;

if (flag == 1)
        return (1);
}

for (i = 0; i < len1; i++)
{
if (isdigit(str2[i]))
        flag = 0;
else
        flag = 1;

if (flag == 1)
        return (1);
}

return (0);
}

/**
* main - printing multiplication of two arguments supplied
* @argc: argument counter
* @argv: argument vector
*
* Return: multiplication result
*/

int main(int argc, char **argv)
{
int len1, len2, dig_num, i;
char dig_str;

if (argc != 3)
{
	printf("Error\n");
	exit(98);
}

if (validate_input(argv[1], argv[2]) == 1)
{
	printf("Error\n");
	exit(98);
}

len1 = strlen(argv[1]);
len2 = strlen(argv[2]);

int *num1 = convert_to_num(argv[i]);

int *result = allocate_memory((len1 + len2 + 1));
for (i = 0; i < (len1 + len2 + 1); i++)
{
	result[i] = 0;
}

for (i = 0; i < (len1 + len2 + 1); i++)
{
	printf("%d", *(result + i)) = 0;
}

return (0);
}

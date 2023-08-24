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

int main(int argc, char **argv)
{
if (validate_input(argv[1], argv[2]) == 1)
{
	printf("Input is not a number\n");
	return (1);
}

else
{
	printf("Yes bana this is a number!\n");
	return (0);
}
}

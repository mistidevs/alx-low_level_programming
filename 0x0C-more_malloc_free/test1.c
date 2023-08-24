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

int *multiply(int *num1, int *num2, int len1, int len2)
{
if (len1 == 0 || len2 == 0)
	return (NULL);

if (len1 == len2) {
    int *result = allocate_memory(len1 + len2);
    for (int i = 0; i < len1; i++) {
      for (int j = 0; j < len2; j++) {
        result[i + j] += num1[i] * num2[j];
      }
    }

    return (result);
  }

  // Otherwise, we need to use the recursive algorithm
  int mid = (len1 + len2) / 2;
  int *left = multiply(num1, num2, len1, mid);
  int *right = multiply(num1 + mid, num2 + mid, len1 - mid, len2 - mid);
  int *result = allocate_memory(len1 + len2 + 1);

  for (int i = 0; i < mid; i++) {
    result[i] = left[i];
  }

  for (int i = 0; i < len2 - mid; i++) {
    result[mid + i] = right[i];
  }

  for (int i = 0; i < mid; i++) {
    for (int j = 0; j < len2 - mid; j++) {
      result[i + j + mid] += left[i] * right[j] + left[i + mid] * right[j + mid];
    }
  }

  return (result);
}

void print_result(int *result, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d", result[i]);
  }

  printf("\n");
}

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

int *num1 = convert_to_num(argv[1]);
int *num2 = convert_to_num(argv[2]);

int *result = allocate_memory(len1 + len2 + 1);

result = multiply(num1, num2, len1, len2);

print_result(result, len1 + len2 + 1);

free(result);

return (0);
}

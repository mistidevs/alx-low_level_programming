#include "main.h"

/**
* rot13 - apply move by 13 letters encryption
* @str: string to rotate
*
* Return: pointer to string rotated
*/

char *rot13(char *str)
{
int i, j;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0 ; str[i] != '\0' ; i++)
{
	for (j = 0 ; j < 52 ; j++)
	{
		if (str[i] == data1[j])
		{
			str[i] = datarot[j];
		}
	}
}

return (str);
}


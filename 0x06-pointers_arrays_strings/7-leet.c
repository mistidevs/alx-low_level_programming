#include "main.h"

/**
* leet - changing letters from form to another
* @str: string to 1337
*
* Return: pointer to string
*/

char *leet(char *str)
{
int len;
int i;
len = 0;

while (str[len] != '\0')
{
	len++;
}


for (i = 0; i < len; i++)
{
	if (str[i] == 'a' || str[i] == 'A')
	{
		str[i] = '4';
	}
	else if (str[i] == 'e' || str[i] == 'E')
	{
		str[i] = '3';
	}
	else if (str[i] == 'o' || str[i] == 'O')
	{
		str[i] = '0';
	}
	else if (str[i] == 't' || str[i] == 'T')
	{
		str[i] = '7';
	}
	else if (str[i] == 'l' || str[i] == 'L')
	{
		str[i] = '1';
	}
	else
	{
		str[i] = str[i];
	}
}

str[len] = '\0';
return (str);
}




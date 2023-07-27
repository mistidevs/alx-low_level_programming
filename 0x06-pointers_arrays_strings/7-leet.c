#include "main.h"

/**
* leet - str[i]hanging letters from form to another
* @str: string to 1337
*
* Return: pointer to string
*/

char *leet(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
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
i++;
}

return (str);
}




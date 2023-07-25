#include "main.h"

/**
* _atoi - printing only numbers without arrays
* @s: string inputted
*
* Return: numbers
*/

int _atoi(char *s)
{
int sign;
int n;
int len;
int i;
sign = 1;
n = 0;
len = 0;
i = 0;

while (s[len] != '\0')
{
len++;
}
while (i < len)
{
if (s[i] == ' ')
{
i++;
}
else if (s[i] == '-')
{
if (s[i+1] >= '0' && s[i+1] <= '9')
{
sign = -1;
i++;
}
else
{
i++;
}
}
else if (s[i] == '+')
{
i++;
}
else if (!(s[i] >= '0') && !(s[i] <= '9'))
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
n = n * 10 + (s[i] - '0');
i++;
}
}
return (n * sign);
}

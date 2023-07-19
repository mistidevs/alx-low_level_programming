#include "main.h"

/**
* _isalpha - checking whether input is a letter using int c
* @c: the character to be checked
*
* Return: 0 if successful
*/

int _isalpha(int c)
{
if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
{
return (1);
}
else
{
return (0);
}

return (0);
}

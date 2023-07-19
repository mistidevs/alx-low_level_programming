#include "main.h"

/**
* _islower - checking whether an alphabetical character is
* in lowercase or otherwise
* @c: the character to be checked
*
* Return: 0 if successful
*/

int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}

return (0);
}

#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

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

/**
* _abs - print absolute value of a number
* @n: the character to be checked
*
* Return: 0 if successful
*/

int _abs(int n)
{
return ((n < 0) ? -n : n);

return (0);
}

/**
* _isupper - checking if letter is uppercase
* @c: integer to check
*
* Return: appropriate value
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}

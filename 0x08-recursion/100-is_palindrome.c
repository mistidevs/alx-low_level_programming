#include "main.h"

/**
* palindrome_helper - adding paramaters to check string
* @s: string being checked
* @left: value of left digit being checked
* @right: value of right digit being checked
*
* Return: 1 or 0 depending on whether string is palindrome
*/

int palindrome_helper(char *s, int left, int right)
{
if (left >= right)
	return (1);

if (s[left] != s[right])
	return (0);

else
	return (palindrome_helper(s, left + 1, right - 1));
}

/**
* is_palindrome - checking if a string is a palindrome
* @s: string being checked
*
* Return: 1 or 0 depending on whether string is a palindrome
*/

int is_palindrome(char *s)
{
int len = 0;

while (s[len] != '\0')
	len++;

return (palindrome_helper(s, 0, len - 1));
}

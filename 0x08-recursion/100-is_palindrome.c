#include "main.h"

int palindrome_helper(char *s, int left, int right)
{
if (left >= right)
	return (1);

if (s[left] != s[right])
	return(0);

else
	return (palindrome_helper(s, left + 1, right - 1));
}

int is_palindrome(char *s)
{
int len = 0;

while (s[len] != '\0')
	len++;

return (palindrome_helper(s, 0, len - 1));
}

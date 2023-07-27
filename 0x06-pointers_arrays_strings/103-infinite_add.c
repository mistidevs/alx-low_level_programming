#include "main.h"

/**
* infinite_add - adds numbers of any range provided size_r
* describes an array large enough to fit them
* @n1: first number
* @n2: second number
* @r: array to hold the result
* @size_r: size of the array to hold the result
*
* Return: pointer to sum of numbers
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int sum, l1, l2, tmpl, i, rl, num1, num2, carry;
char tmp[10000];
l1 = l2 = sum = i = rl = num1 = num2 = carry = 0;
while (n1[l1] != '\0')
	l1++;
while (n2[l2] != '\0')
	l2++;
if (l1 + 2 > size_r || l2 + 2 > size_r)
	return (0);
l1--;
l2--;
for (; i <= l1 || i <= l2 ; i++)
{
	num1 = num2 = 0;
	if (i <= l1)
		num1 = n1[l1 - i] - '0';
	if (i <= l2 && (l2 - i) >= 0)
		num2 = n2[l2 - i] - '0';
	sum = num1 + num2 + carry;
	if (sum > 9)
		carry = 1, sum -= 10;
	else
		carry = 0;
	r[i] = sum + '0', rl++;

}
if (carry > 0)
	r[i] = carry + '0', r[i + 1] = '\0';
i = tmpl = 0;
while (i <= rl)
	tmp[i] = r[rl - i], tmpl++, i++;
i = 0;
while (i < tmpl)
{
	if (r[i] == '\0')
		break;
	r[i] = tmp[i];
	i++;
}
return (r);
}

#include "main.h"

int _strlen(char *s)
{
int y;
for (y = 0 ; *s != '\0' ; y++)
{
s++;
}
return (y);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int ind = 0;
int carryover = 0;
int i = 0;
int j = 0;
int len1 = _strlen(n1);
int len2 = _strlen(n2);

if (len1 < len2)
{
for (i = len1 - 1; i >= 0; i--)
{
n1[i + len2 - len1] = n1[i];
}
for (i = 0; i < len2 - len1; i++)
{
n1[i] = '0';
}
n1[len2] = '\0';
len1 = len2;
}
else if (len2 < len1)
{
for (j = len2 - 1; j >= 0; j--)
{
n2[j + len1 - len2] = n2[j];
}
for (j = 0; j < len1 - len2; j++)
{
n2[j] = '0';
}
n2[len1] = '\0';
len2 = len1;
}

i = len1 - 1;
j = len2 - 1;

while (i >= 0 || j >= 0)
{
int digit1, digit2, sum;

digit1 = n1[i] - '0';
digit2 = n2[j] - '0';
sum = digit1 + digit2 + carryover;

if (sum > 9)
{
carryover = 1;
sum -= 10;
}
else
{
carryover = 0;
}

if (ind < size_r - 1)
{
r[ind] = sum + '0';
ind++;
}
else if (ind >= size_r)
{
char r[1];
r[1] = '0';
return (r);
}

i--;
j--;

}



if (carryover == 1)
{

if (ind < size_r - 1)
{
r[ind] = '1';
ind++;
}
else
{
return (0);
}

}

for (i = ind - 1, j = 0; i > j; i--, j++)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
r[ind] = '\0';

return (r);
}

#include <stdio.h>

/**
* main - print fizz if divisible by 3
* print buzz if divisible by 5
* print fizzbuzz if divisible by 15
*
* Return: 0 if successful
*/

int main(void)
{
int n;
for (n = 1 ; n <= 100 ; n++)
{
if (n % 15 != 0 && n % 5 != 0 && n % 3 != 0)
{
printf("%d ", n);
}
else if (n % 15 == 0)
{
printf("FizzBuzz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
}
printf("\n");

return (0);
}



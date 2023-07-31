#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello my name is Demistify inc.";
    char *f;

    f = _strchr(s, 'x');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    else
    {
        printf("Character not found\n");
    }
    return (0);
}

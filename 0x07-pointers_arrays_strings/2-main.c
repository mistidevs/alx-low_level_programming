#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "";
    char *f;

    f = _strchr(s, '\0');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    else if (f == NULL)
    {
        printf("Character not found\n");
    }
    return (0);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - frees dogs made by struct dog
* @d: pointer to dog_t
*
* Return: void
*/

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}

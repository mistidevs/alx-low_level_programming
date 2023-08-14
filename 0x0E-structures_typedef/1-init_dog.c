#include "dog.h"

/**
* init - initilaizing variable of type struct dog
* @d: pointer to struct dog
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - function that creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of the dog
*
* Return: pointer to new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
	return (NULL);

if (name == NULL)
	return (NULL);
else
	new_dog->name = name;

new_dog->age = age;

if (owner == NULL)
	return (NULL);
else
	new_dog->owner = owner;

return (new_dog);
}

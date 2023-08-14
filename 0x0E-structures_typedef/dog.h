#ifndef DOG_H
#define DOG_H

/**
* struct dog - strcuture that holds data about a dog
* @name: name of dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: No further description
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
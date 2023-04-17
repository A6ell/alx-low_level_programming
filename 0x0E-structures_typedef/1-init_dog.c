#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to the struct dog variable to initialize
* @name: pointer to a string representing the dog's name
* @age: age of the dog
* @owner: pointer to a string representing the dog's owner's name
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

if (name != NULL)
{
d->name = malloc(strlen(name) + 1);
if (d->name != NULL)
strcpy(d->name, name);
}

d->age = age;

if (owner != NULL)
{
d->owner = malloc(strlen(owner) + 1);
if (d->owner != NULL)
strcpy(d->owner, owner);
}
}

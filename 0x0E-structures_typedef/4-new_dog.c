#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* init_dog - Initializes a dog structure.
* @d: Pointer to the dog structure to initialize.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: void
*/
void init_dog(dog_t *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

/**
* new_dog - Creates a new dog.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Pointer to the new dog, or NULL if fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_length, owner_length;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_length = strlen(name) + 1;
name_copy = malloc(name_length);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
memcpy(name_copy, name, name_length);

owner_length = strlen(owner) + 1;
owner_copy = malloc(owner_length);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
memcpy(owner_copy, owner, owner_length);

init_dog(new_dog, name_copy, age, owner_copy);

return (new_dog);
}

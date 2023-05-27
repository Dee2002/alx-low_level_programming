#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  It declares a variable my_dog of type struct dog
 * @name: aasigned the "Poppy" string
 * @age: a member assigned the value 3.5
 * @owner: string assignment
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

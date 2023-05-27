#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  It declares a variable my_dog of type struct dog
 * @name: aasigned the "Poppy" string
 * @age: a member assigned the value 3.5
 * @owner: string assignment
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */

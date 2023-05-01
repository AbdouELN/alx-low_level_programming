#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog initilayzed
 * @name: name of dogs
 * @age: age of dogs
 * @owner: owner dogs
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

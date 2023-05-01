#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type struct dog
 * @name: name of dogs
 * @age: age of dogs
 * @owner: dog's owner
 * Description: Define a new type struct dog with the following elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

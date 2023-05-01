#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: the dog to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name, "(nil)");
		printf("Age: %f\n", d->age, "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner, "(nil)");
	}
}

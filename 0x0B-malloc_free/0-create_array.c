#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: characters input
 * Return: Returns NULL if size = 0 else
 * Returns a pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}
	char *array = malloc(sizeof(char) * size);

	if (array == 0)
	{
		return (0);
	}
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

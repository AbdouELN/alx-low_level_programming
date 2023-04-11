#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * @str: string
 * Return: returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, size;
	char *memory;

	if (str == 0)
	{
		return (0);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	memory = malloc(size * sizeof(*str) + 1);

	if (memory == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			memory[i] = str[i];
		}
	}
	return (memory);
}

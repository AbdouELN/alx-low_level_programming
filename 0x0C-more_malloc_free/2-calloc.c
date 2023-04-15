#include"main.h"
#include<stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: array of nmemb elements
 * @size: of size
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tab;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	tab = malloc(nmemb * size);

	if (tab == NULL)
	{
		return (NULL);
	}
	_memset(tab, 0, nmemb * size);
	return (tab);
}
/**
 * _memset - set memory
 * @str: pointer
 * @by: constant
 * @n: number of byte
 * Return: str
 */
char *_memset(char *str, char by, unsigned int n)
{
	char *s = str;

	while (n--)
	{
		*str++ = by;
	}
	return (s);
}

#include "main.h"
/**
 * *_strncpy - copies a string
 *
 * @dest: copiy to
 *
 * @src: copiy from
 *
 * @n: number of string copies
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		while (i < n)
		{
			dest[i] = src[i];
		}
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

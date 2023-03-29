#include "main.h"
/**
 * *_strncpy - copies a string
 *
 * @dest: copiy to
 *
 * @src: copiy from
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		while (j < n)
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0';
	return (dest);
}

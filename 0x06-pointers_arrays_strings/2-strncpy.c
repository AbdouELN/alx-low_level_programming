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
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		while (j <= n)
		{
			dest[i] = src[j];
		}
	}
	dest[i] = '\n';
	return (dest);
}

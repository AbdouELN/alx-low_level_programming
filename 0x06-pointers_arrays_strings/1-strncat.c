#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: nembers of bytes
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

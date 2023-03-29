#include "main.h"
/**
 * *_strcat - that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		if (src[i] != '\0')
		{
			dest[j] = src[i];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

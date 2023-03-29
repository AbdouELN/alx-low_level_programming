#include "main.h"
/**
 * *_strcpy - Write a function that copies the string pointed
 *
 * @dest: the buffer pointed
 *
 * @src: the string pointed
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

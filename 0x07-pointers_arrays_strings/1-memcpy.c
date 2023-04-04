#include "main.h"
/**
 * *_memcpy - copy
 * @dest: p
 * @src: p
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ir;

	for (ir = 0; ir < n; ir++)
	{
		dest[ir] = src[ir];
	}
	return (dest);
}

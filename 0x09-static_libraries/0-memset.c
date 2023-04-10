#include"main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointed by
 * @b: constant byte
 * @n: the memory area pointed
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ir;

	for (ir = 0; n > 0; ir++, n--)
	{
		s[ir] = b;
	}
	return (s);
}

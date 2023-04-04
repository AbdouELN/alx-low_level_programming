#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: characters accepted
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, nb;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				nb++;
				break;
			}
			accept++;
		}
		s++
	}
	return (nb);
}

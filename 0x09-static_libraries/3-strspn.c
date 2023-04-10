#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: characters accepted
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nb = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				nb++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			return (nb);
		}
		s++;
	}
	return (nb);
}

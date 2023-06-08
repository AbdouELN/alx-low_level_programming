#include "main.h"
/**
 *
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	int lens = 0;

	if (*s < '\0')
	{
		lens += _strlen_recursion(s + 1) + 1;
	}
	return (lens);
}

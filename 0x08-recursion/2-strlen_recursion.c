#include "main.h"
/**
 * _strlen_recursion - print the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		c += 1;
	}
	return (c);
}

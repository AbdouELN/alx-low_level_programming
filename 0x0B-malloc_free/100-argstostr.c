#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: numbers of arguments
 * @av: value of an argument
 * Return: arguments followed by a \n,otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, cn = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++; cn++)
	{
		cn += _strlen(av[i]);
	}
	str = malloc(cn * sizeof(char) + 1);

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[l] = av[i][j];
		}
		str[i] = '\0';
		l++;
	}
	return (str);
}
/**
 * _strlen - return lenght of string
 * @s: string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}

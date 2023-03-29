#include "main.h"
/**
 * _strcmp - compares two strings.
 *
 * @s1: input
 * @s2: input
 *
 * Return: result *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
		}
		i++;
	}
	return (result);
}

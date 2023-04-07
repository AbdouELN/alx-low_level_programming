#include "main.h"
/**
 * wildcmp - checks if s1 = s2 
 *
 * @s1: string
 *
 * @s2: dtring
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		return(wildcmp(s1, s2 + 1));
	}
}

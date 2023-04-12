#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: seconde string
 * Return: newly allocated space in memory which contains the contents
 * s1 followed by s2, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int lens1, lens2;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
	{
		;
	}
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
	{
		;
	}
	s3 = malloc((lens1 + lens2) * sizeof(char) + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
		while (s2[j] != '\0')
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}

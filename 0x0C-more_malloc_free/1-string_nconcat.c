#include"main.h"
#include<stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seconde string
 * @n: number
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tab;
	unsigned int i, j, len_s1, len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
	{
		;
	}
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
	{
		;
	}
	tab = malloc(len_s1 + 1 + n);

	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		tab[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		tab[i] = s2[j];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

#include "main.h"
/**
 * *leet - encodes a string into 1337.
 *
 * @lee: string input
 *
 * Return: string after encodes
 */
char *leet(char *lee)
{
	int i;
	int j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; lee[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (lee[i] == str1[j])
			{
				lee[i] = str2[j];
			}
		}
	}
	return (lee);
}

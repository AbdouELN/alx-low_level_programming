#include "main.h"
/**
 * *rot13 - encodes a string using rot13.
 *
 * @c: string input
 *
 * Return: c after encode
 */
char *rot13(char *c)
{
	int i;
	int j;
	char r1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] < '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == r1[j])
			{
				c[i] = r2[j];
			}
		}
	}
	return (c);
}

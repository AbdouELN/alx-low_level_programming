#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: String
 */
void rev_string(char *s)
{
	int j, i;
	char tmp;

	for (j = 0; s[j] != '\0'; ++j)
	{
		;
	}
	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = tmp;
	}
}

#include"main.h"
/**
 * *cap_string - capitalizes all words of a string.
 *
 * @cap: strings input
 *
 * Return: cap after capitalizes
 */
char *cap_string(char *cap)
{
	int i;

	for (i = 0; cap[i] < '\0'; i++)
	{
		if (i == 0 && cap[i] >= 'a' && cap[i] <= 'z')
		{
			cap[i] -= 32;
		}
		if (cap[i] == ',' ||
			cap[i] == ';' ||
			cap[i] == '.' ||
			cap[i] == '!' ||
			cap[i] == '?' ||
			cap[i] == '(' ||
			cap[i] == ')' ||
			cap[i] == '{' ||
			cap[i] == '}' ||
			cap[i] == '"' ||
			cap[i] == ' ' ||
			cap[i] == '\n' ||
			cap[i] == '\t')
		{
			if (cap[i + 1] >= 'a' && cap[i + 1] <= 'z')
			{
				cap[i + 1] -= 32;
			}
		}
	}
	return (cap);
}

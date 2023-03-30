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
		if (cap[i - 1] == ',' ||
			cap[i - 1] == ';' ||
			cap[i - 1] == '.' ||
			cap[i - 1] == '!' ||
			cap[i - 1] == '?' ||
			cap[i - 1] == '(' ||
			cap[i - 1] == ')' ||
			cap[i - 1] == '{' ||
			cap[i - 1] == '}' ||
			cap[i - 1] == '"' ||
			cap[i - 1] == ' ' ||
			cap[i - 1] == '\n' ||
			cap[i - 1] == '\t')
		{
			if (cap[i] >= 'a' && cap[i] <= 'z')
			{
				cap[i] -= 32;
			}
		}
	}
	return (cap);
}

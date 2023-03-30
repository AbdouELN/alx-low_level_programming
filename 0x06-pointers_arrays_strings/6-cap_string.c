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
		while (!(cap[i] <= 'z' && cap[i] >= 'a'))
		{
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
				cap[i] == '\t' ||
				i == 0)
			{
				cap[i + 1] = cap[i + 1] - 32;
			}
		}
	}
	return (cap);
}

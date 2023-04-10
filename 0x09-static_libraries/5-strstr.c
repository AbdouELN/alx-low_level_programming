#include "main.h"
/**
 * *_strstr - a function that locates a substring.
 * @haystack: string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0' && *n != '\0')
	{
		if (*n == *h)
		{
			return (h);
		}
		n++;
		h++;
	}
	return ('\0');
}

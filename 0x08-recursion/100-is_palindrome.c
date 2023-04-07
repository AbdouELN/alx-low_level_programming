#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string input
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = int _strlen(char *s);
	int palindrome(char *s, int len);
}
/**
 * _strlen - return length of a string
 *
 * @s: input string
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1))
}
/**
 * palindrome - cheks if a string is a palindrome
 * @s: input string
 * @ien: length of a string
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	if (*s == *(s + len - 1))
	{
		return (palindrome(s + 1, len - 2);
	}
	return (0);
}
